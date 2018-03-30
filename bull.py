#!/usr/bin/env python3
import sys
if sys.version_info[0] < 3:
    raise ImportError('Python < 3 is unsupported.')

from abc import ABC
import curses
import io
import subprocess


class BULLSyntaxError(Exception):
    pass


class Parser:
    """A parser for BULL."""

    class Path(ABC):
        is_path = True
        is_step = False
        is_angel = False

        opens_with = None
        closes_with = None

        def __init__(self, superpath=None):
            self.superpath = superpath
            self.steps = []
            self.depth = superpath.depth + 1 if superpath is not None else 1

    class StaticPath(Path):
        indicators = ['[', ']']
        opens_with = '['
        closes_with = ']'

    class DynamicPath(Path):
        indicators = ['(', ')']
        opens_with = '('
        closes_with = ')'

    class Filter(Path):
        indicators = ['{', '}']
        opens_with = '{'
        closes_with = '}'

    class Step(ABC):
        is_path = False
        is_step = True
        is_angel = False

        indicators = []

        def __init__(self):
            self.path = None
            self.angel = None

    class StepLeft(Step):
        indicators = ['\\']

    class StepRight(Step):
        indicators = ['/']

    class StepUp(Step):
        indicators = ['|']

    class Angel(object):
        is_path = False
        is_step = False
        is_angel = True

        def __init__(self):
            self.is_unknown = False
            self.is_placeholder = False
            self.is_definition = False
            self.is_any_any_time = False

    class UnknownAngelIndicator(object):
        indicator = '?'

    class AngelDefinitionIndicator(object):
        indicator = '!'

    class AnyAngelAnyTimeIndicator(object):
        indicator = '*'

    class Point(ABC):
        indicator = '<'

    PATH_TYPES = {T.opens_with: T for T in (StaticPath, DynamicPath, Filter)}
    PLACEHOLDER_TYPES = {T.placeholder: T for T in (UnknownAngel, AngelDefinition, AnyAngelAnyTime)}

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

    def __iter__(self):
        return self

    def __next__(self):
        """Yields paths, one at a time."""

        path = None

        while self.string_index < self.string_length:
            char = self.string[self.string_index]
            if char in self.SPACE_CHARACTERS:
                pass
            elif char in self.PATH_TYPES:
                # Initialize new path
                path = self.PATH_TYPES[char](superpath=path)
            elif path is not None and char == path.closes_with:
                if path.superpath is None:
                    # We were in a root path; let's return it.
                    return path
                path = path.superpath
                # We've returned to the superpath.
            elif path is None:
                raise BULLSyntaxError('First you must begin a path!')
            elif char in self.PLACEHOLDER_TYPES:
                angel = Angel()
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
