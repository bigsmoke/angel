# Angel

Angels don't exist. Therefore, every‘thing’ in a computer could be called an `angel`, because these ‘things’ are not really things; they're abstraction upon abstraction for what eventually boils down to processor instructions.

## BULL—BigSmoke's Unified Linking Language

If you say shit about non-existent entities, this shit is likely to be _bullshit_; hence the name for the language with which to query and describe angels: *BULL*.

BULL is a general-purpose computer language, and in order to serve is general purpose, it needs to be able to do only 2 things: (1) creating relationships between angels and (2) querying these relationships.

### BULL in bullets

* Everything in the Angel universe (read: _namespace_) is an angel.
* Angels are imaginary endpoints for relationships: `endpoint 1 \ < relationship > / endpoint 2`.
* Relationships can be unidirectional (`angel X \ unidirectional relationship pointing to Y > < unidirectional relationship pointing to X / angel Y`), or bidirectional (`angel X \ < bidirectional relationship > / angel Y`).
* Multiple steps can be organized into paths (`[]`): `angel that will be left-stepped to \ < rel 1 / angel that will be right-stepped to and then left-stepped \ < rel 1 / another right-stepped-to angel ]`.
* A path _almost_ always consists of a series of left-right steps. Angel hops from the left foot to the right, then joins the right foot with the left and steps right again from there.
* For subsequent steps to the right (`/`) along the same relationship axis, the relationship can be omitted: `angel M \ < relationship that will be used thrice / angel N / angel O / angel P`. This is just a shorthand, though, to avoid repetition: `angel M \ < relationship that will be used thrice / angel N \ < relationship that will be used thrice / angel O \ < relationship that will be used thrice / angel P`.
* Steps can also be _up_/_forward_: `Donald Duck \ < nephew / Huey | Dewey | Louie`. `Huey`, `Dewey` and `Louie` are all `nephew`s of `Donald Duck`, not of each other (which they would be if their relationship was described as `Donald Duck \ < nephew / Huey / Dewey / Louie`).
* New angels are imagined into existence by the angel definition (`!`) indicator: `angel A / !`
* Angels have one or more names: `angel A / angel B !`.
* Angel names are inherited from each angel's ancestors. (`angel B` above is _also_ called `angel A`.)
* Most angels have a whole bunch of inherited names.
* `popular angel` refers to the _complete set_ of angels with the `popular angel` name.
* To select only the first angel with a given name, `&#0` can be used.
* That is because the default relationship axis is `parent > < child`.
* `#` followed by any number (_n_) will always select the _n_th angel in a string of angels related along the current knot (`&`).

### Relating angels

Relate `angel 1` to `angel 2` through `relationship A` and `relationship B`, `angel 1` to `angel 3` through `relationship C`, and `angel 3` to `angel 4` through `relationship D`:

```
[ angel 1 \ relationship A > < relationship B / angel 2 ]
[ angel 1 \ < relationship C / angel 3 ]
[ angel 3 \ relationship D > / angel 4 ]
```

### Querying angels

Get to `angel 4` without knowing `angel 4` or `angel 3` its names:

```
angel 1 \ < relationship C / ? \ relationship D > / ?
```

### Angels don't exist; thus, they can't be created

Angels aren't objects. They don't have a phsyical representation. They aren't objects. They're just an imaginary endpoints for relationships. To imagine a new angel into existence, the `!`—_angel definition_—placeholder is used:

```
angel 1 \ < relationship C / !
```

### Paths (static)

A path begins with `[` and ends with `]`. (Dynamic paths begin and end with `(` and `)` respectively, but more about that later.)

#### Heavy steps

Some steps—if they are heavy—leave an imprint. A step is made heavy by doubling the `\` or `/`.

```
[ angel 1 \ < relationship C / ? \ relationship D > // ? ]
```

The imprinted angels in a path are the angels that can be pointed at in the superpath:

```
[ angel 1 \ rel. C / ? \ rel. D > // ? ] \ < rel. E / ?
```

The final unknown angel (`?`) at the right would be the angel related along `rel. E` to the final unknown angel in the subpath, preceded by the heavy step right (`//`).

#### Heavy paths

A whole path can be made heavy, allowing stepping onto _it_ rather than its imprints:

```
[[ I \ < am / ? / a / complicated path ]] \ < angel name / I am now a complicated path with a name
```

#### Recursion and the superpath

A path can refer to itself by means of `[]`, which allows for recursion.

A subpath can refer to its superpath by means of `[^]`. Actually, this would refer to the imprint of its superpath. To refer to the actual path itself would require `[[^]]`. To refer back just to the containing _step_, `^` without surrounding `[]` is used.

```
[ a1 \ < rA / [ ^ \ < rB / ? \\ ] \\ ]
```

### Querying relationships

Are `angel 1` and `angel 2` related through `relationship A`?

```
angel 1 \ relationship A ? > / angel 2
```

(How) are `angel 1` and `angel 2` related?

```
angel 1 \ ? > < ? / angel 2
```

### Dynamic paths and command arguments

```
[ ( something dynamic that happens ) \ < relationship A / B ]
```

Dynamic paths are not walked until the moment that a _command argument_ (`@`) placeholder is found that relates along the _command argument_ axis:

```
B \ relationship A > // @
```

```
[ @ \\ < sum / #3 | #5 ]
```

could return `#8`.

Within `()`, the command caller context can be referenced using: `^@`.

### Lengths and strings

To get the number of `relative`s of `my angel`:

```
my angel \ < relative // #
```

To string angels together:

```
first A \ previous > & < next / second A & third A & fourth A & fifth A
```

Is this semantically different from just continuing to step right? Steps are, after all, substrings of a path.

```
first A \ previous > < next / second A / third A / fourth A / fifth A
```

Regardless of this, `&` _is_ convenient, because the knot won't change if you use different relationship axes along the path.

When used together with the _unknown angel_ placeholder (`&?`), `&` means something different than when used as a _string knot_ indicator (as above). The below gets the angel next to `first A`, and next to the angel next to `first A`, etc.:

```
first A \ & < next // &?
```

Counts (to determine the string length) can also be done in this manner:

```
first A \ & < next // &#
```

Dynamic strings allow you to unfold a set of angels into a sorted sequence:

```
lots of angels \ greater than or equals > & < less than // &@
```

### Angels have parents and can have children

Every angel descends from `angel`. To make an angel descend from another angel:

```
Van der Molen &#0 / Rowan van der Molen !
```

`Rowan van der Molen` will be a new `angel child` of `angel parent` `van der Molen`. Child angels inherit all their parents' names. Without making use of the rule that the default relationship axis is the `angel parent >< angel child` relationship, the above example can be made more verbose:

```
Van der Molen \ angel parent > & < angel child / &#0 & Rowan van der Molen !
```

The `&#0` is necessary because, otherwise, every angel that inherited the `Van der Molen` name would have become a parent of the new `angel child`. `&#0` 

### Stacking angels

`|` represents a step forward. It is used to relate the angel to the right of `|`—the _step forward indicator_—to 


### Implied relationships, events, triggers, and filters

```
angel 1 \ < relationship D / *
```

The steps from `*` will be walked whenever something ‘new’ is related to `angel 1` through `relationship D`. This can also be made more generic:

```
* \ < relationship D / *
```

Events can also be forbidden to happen:

```
angel 1 \ < relationship E / *# = 0
```

This won't allow anything to be related to `angel 1` through `relationship E`.

Events occur implicitly whenever relationships are created or destroyed. There's no notion of an explicit event, nor would it add expressivity.

Instead of explicit events (or ‘signals’, as Qt would call them), Angel has filters. Filters match a pattern. Patterns can be of arbitrary complexity. The concrete occurance of a pattern is called an _event_. A _filter_ is the non-distinct stage of an _event_. Both stages are _patterns_. An event may match any number of filters. Like already mentioned, there's no special syntax for defining events, nor is there a need.

```
{ pattern }
```

Like paths, patterns can be made heavy by doubling the `{}`:

```
{{ heavy pattern }}
```

There's no need for explicit events, but patterns _can_ be invoked explicitly, although indirectly. Without specifying which pattern precisely, the most suitable pattern for any context can be invoked by using the `~` indicator:

```
angel 1 \ < relationship B / ~
```

The most suitable pattern is always the one that is _most specific_. The specificity of a pattern depends on the detailedness with which it matches.

Patterns have three contexts:

  1. `^~` is the _concrete pattern_ context.
  2. `^*` is the event trigger context.
  3. `^` is the _pattern path_ context.
  
The _concrete pattern_ context (`^~`) only exists when a pattern has been explicitly invoked using `~`. `^*` is always available and points to the relationship which is matched by the pattern.
  
  
A pattern acts like a regular path, except that its concrete steps are not known at the time of creation. Note that this goes beyond the concept of recursion that is available in both dynamic and static ordinary paths. A pattern is about matchig a pre-existing filter on a concrete set of relationships. A pattern can be recusive, though. For that, a pair of empy curly braces (`{}`) can be used.

Self-learning patterns can be defined by attaching positive and negative weight to relationships or by blacklisting events:

```
{
  ^~ \ < bad relationship / # = 0
  ^~ \ < good relatinship / # = 1+
}
```

This wouldn't allow the pattern to match in any context with a `bad relationship` and would require at least one `good relationship`.

### Indicator summary

| Indicator    | Imprintable? |                         |
| ------------ | ------------:| ----------------------- |
| `\`          |      (heavy) | step left               |
| `/`          |      (heavy) | step right              |
| `\|`         |              | step forward            |
| `<`          |      (heavy) | point left              |
| `>`          |      (heavy) | point right             |
| `?`          |              | unknown angel           |
| `!`          |              | angel definition        |
| `#`          |              | angel count             |
| `^`          |              | uperpath context        |
| `@`          |              | command argument        |
| `*`          |              | angel event             |
| `~`          |              | dynamic path/pattern    |

### Indicator combinations and their meanings

| Indicators   |                                                   |
| ------------ | ------------------------------------------------- |
| `^@`         | The calling context (can only be used within `()`)|
| `^*`         | The event that triggered the filter               |
| `^~`         | The generic pattern's _concrete_ context          |
| `?!`         | Define endpoint if it doesn't already exist       |
| `&#`         | The number of subsequent substrings               |
| `&#0`        | The left-most substring in a superstring          |

## The Angel universe

Pretending that angels exists opens up a whole new universe, where objects dissolve in their relationships. 

```
[ 9761 VB ]
```

> The goal of Computer Science is to build something that will last at least until we've finished building it.

<!-- :set expandtab tabstop=2 shiftwidth=2 wrap=100 : -->
