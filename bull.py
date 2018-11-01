#!/usr/bin/env python3
import sys
if sys.version_info[0] < 3:
    raise ImportError('Python < 3 is unsupported.')

from abc import ABC
import curses
import io
import subprocess


class BullSyntaxError(Exception):
    pass


class Parser:
    """A parser for BULL."""

    class Element(ABC):
        @property
        def is_seat(self):
            return isinstance(self, Seat)

        @property
        def is_path(self):
            return isinstance(self, Path)

        @property
        def is_static(self):
            return isinstance(self, StaticPath)

        @property
        def is_dynamic(self):
            return isinstance(self, DynamicPath)

        @property
        def is_filter(self):
            return isinstance(self, Filter)

        @property
        def is_step(self):
            return isinstance(self, Step)

        @property
        def is_unknown(self):
            return isinstance(self, UnknownAngel)

        @property
        def is_definition(self):
            return isinstance(self, AngelDefinition)

    class Seat(Element, ABC):
        """
        Within a path, there can only ever be one step _to_ a seat,
        but any number of steps from that seat to subsequent seats.

        A seat is not to be confused with an angel. An angel can have
        any number of connections to any number of any angels, in any
        direction. The web (or sea) of angels is therefore definitely
        multi-dimensional.

        There are two kinds of seats: paths and placeholders.

        * A `Path` consists of any number of steps. Each `Step` informs a
          link between two seats.
        * A `Placeholder` represents any number of more or less known angels.
          These angels may be defined, referenced or queried during
          execution of the step, depending on the particular indicators
          used (e.g. `?`).
        """
        pass

    class Path(Seat, ABC):
        """
        A path consists of steps. Steps go from one `Seat` to the next.
        """
        opens_with = None   # Defined in subclasses
        closes_with = None  # Defined in subclasses

        def __init__(self, superseat=None, is_heavy=False):
            if superseat is not None and not isinstance(superseat, Path):
                raise TypeError('Superseat has to be a path.')

            self.superseat = superseat
            self.steps = []
            self.depth = superseat.depth + 1 if superseat is not None else 1

        def __str__(self):
            return self.opens_with + '…' + self.closes_with

        @property
        def indicators(cls):
            return [cls.opens_with, cls.closes_with]

    class StaticPath(Path):
        opens_with = '['
        closes_with = ']'

    class DynamicPath(Path):
        opens_with = '('
        closes_with = ')'

    class Filter(Path):
        opens_with = '{'
        closes_with = '}'

    class Step(Element):
        """
        A step is always from one `Seat` to the next.

        Syntactically, a step may be uni-directional, bi-directional, or symmetrical.
        What's being modelled is always just a step from one seat to the next.
        """
        indicators = []

        def __init__(self, is_heavy=False, in_path=None, to_seat=None, from_seat=None, point_seat=None, symmetrical=None):
            if not isinstance(is_heavy, bool):
                raise TypeError('is_heavy must be boolean True or False.')
            if in_path is not None and not isinstance(in_path, Path):
                raise TypeError('in_path must be a Path subclass.')
            if to_seat is not None and not isinstance(to_seat, Seat):
                raise TypeError('to_seat must be a Seat subclass.')
            if from_seat is not None and not isinstance(from_seat, Seat):
                raise TypeError('from_seat must be a Seat subclass.')
            if point_seat is not None and not isinstance(point_seat, Seat):
                raise TypeError('point_seat must be a Seat subclass.')
            if symmetrical is not None and not isinstance(symmetrical, Step):
                raise TypeError('symmetrical must be of type Step.')

            self.in_path = in_path
            self.to_seat = to_seat
            self.from_seat = from_seat
            self.point_seat = point_seat
            self.symmetrical = symmetrical

    class StepLeft(Step):
        indicators = ['\\']

    class StepRight(Step):
        indicators = ['/']

    class StepUp(Step):
        indicators = ['|']

    class Point(Element, ABC):
        pass

    class PointLeft(Point):
        indicators = ['<']

    class PointRight(Point):
        indicators = ['>']

    class Placeholder(Seat):
        pass

    class NamedAngel(Placeholder):
        indicators = [None]

        def __init__(self, name):
            if not isinstance(name, str):
                raise TypeError('name should be string.')

            self.name = name

    class UnknownAngel(Placeholder):
        indicators = ['?']

    class AngelDefinition(Placeholder):
        indicators = ['!']

    class AngelEnsurance(Placeholder):
        indicators = ['?!']

    class AnyAngelAnyTime(Placeholder):
        indicators = ['*']

    SEAT_TYPES = {T.indicators[0]: T for T in (
        StaticPath, DynamicPath, Filter, UnknownAngel, AngelDefinition, AngelEnsurance, AnyAngelAnyTime
    )}
    STEP_TYPES = {T.indicators[0]: T for T in (StepLeft, StepRight, StepUp)}
    POINT_TYPES = {T.indicators[0]: T for T in (PointLeft, PointRight)}
    PLACEHOLDER_TYPES = {
        T.indicators[0]: T for T in (
            UnknownAngel, AngelDefinition, AngelEnsurance, AnyAngelAnyTime
        )
    }
    PATH_INDICATORS = ['[', ']', '(', ')', '{', '}']
    STEP_INDICATORS = ['\\', '/', '|']
    POINT_INDICATORS = ['<', '>']
    INDICATORS = PATH_INDICATORS + STEP_INDICATORS + POINT_INDICATORS + [
        '&', '#', '^', '*', '?', '!', '@', '~',
    ]

    SPACE_CHARACTERS = [' ', '\t', '\n']

    def __init__(self, stream_or_string):
        self.string = None
        self.paths = []

        if isinstance(stream_or_string, io.IOBase):
            stream = stream_or_string
            self.string = stream.read(None)
        elif isinstance(stream_or_string, str):
            self.string = stream_or_string
        else:
            raise TypeError('Input must be of type IOBase or str.')

        self.string_index = 0
        self.string_length = len(self.string)

    def parse_seat(self):
        """Parse a part of a `Path` string into a `Seat` object."""

        while self.string_index < self.string_length:
            char = self.string[self.string_index]

            if char in self.SEAT_TYPES:
                raise Exception('Dfdfdf')

            self.string_index += 1

        return seat

    def parse_element(self):
        pass

    def parse_path(self):
        """Parse string into a `Path` object."""

        expecting = Path
        seat = None
        point = None
        step = None
        name = None
        indicator = None

        while self.string_index < self.string_length:
            char = self.string[self.string_index]
            if char in self.SPACE_CHARACTERS and name is None:
                pass
            elif char in self.PATH_TYPES:
                # Initialize new path
                seat = self.PATH_TYPES[char](superseat=path)
            elif path is not None and char == path.closes_with:
                if seat.superseat is None:
                    # We were in a root path; let's return it.
                    return path
                seat = path.superseat
                # We've returned to the superseat.
            elif path is None:
                raise BullSyntaxError('First you must begin a path!')
            # We're within a path. That is good.
            elif char in self.INDICATORS:
                indicator += char
            else:
                name += char
            self.string_index += 1


import unittest


class ParserTests(unittest.TestCase):
    def test_anything_must_be_contained_in_a_path(self):
        pass


if __name__ == '__main__':
    import argparse

    arg_parser = argparse.ArgumentParser(description='Grab the BULL by its horns.')
    arg_parser.add_argument('--test', action='store_true', help='Run the test suite.')
    options = arg_parser.parse_args()

    if options.test:
        test_loader = unittest.TestLoader()
        test_suite = test_loader.loadTestsFromTestCase(ParserTests)
        test_runner = unittest.TextTestRunner()
        test_runner.run(test_suite)
    else:
        bull_parser = Parser(sys.stdin)
        path = next(bull_parser)
        print(path)
