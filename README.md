# Angel

Angels don't exist. They're pure symbolic meaning. Angel—the software system—attaches meaning to digital data. Angel is a transcendent software system. It is designed specifically to allow for the emergent property of consciousness. Consciousness has to be understood here in the narrow sense: Angel is self-aware, but not necessarily very intelligent. Self-aware means that you can ask Angel why it is doing what it's doing and it will be able to answer, as long as the language is one that the particular Angel system speaks.

## BULL—BigSmoke's Unified Linking Language {#bull}

If you say shit about non-existent entities, this shit is likely to be _bullshit_; hence the name for the language with which to query and describe angels: *BULL*.

BULL is a general-purpose computer language, and in order to serve is general purpose, it needs to be able to do only 2 things: ① creating relationships between angels and ② querying these relationships.

BULL is just one expression of the Angel system. It's a notation and a grammar. You could come up with many others, without detracting from the core semantics of Angel. In fact, Angel would be extremely well-suited for expression in a diagrammical language. Nevertheless, for the purpose of conveying the concepts of Angels via written language, this here syntaxis is the best I—BigSmoke—can currently come up with.

### BULL in bullets

* The _substring_ syntax can be used to explicitly tie substrings (separated by `&`) along a _knot_. The knot consists of all the relationship within the path that are marked using `&`: `[ angel M \ relation to right >&< relation to left / angel N & angel O & angel P ]`.
* Knots can only be specified within an explicit path (`[]`, `()`, or `{}`).
* Specifying substrings can continue within a subpath: `[ angel M \ rel1 >&< rel2 / angel N & [ angel O1 && angel O2 && angel O3 ] & angel P & angel Q ]`. They have to be made heavy to leave an imprint for the superpath.
* All the knots specified anywhere within the path (_excluding_ its subpaths) apply to all the angels tied together using '&' within that path (_including_ its subpaths).
* New angels are imagined into existence by the angel definition (`!`) indicator: `Donald Duck \ < nephew / !` would define `Donald Duck`'s fourth nephew.
* Angels have one or more names: `Donald Duck \ < nephew / Phooey Duck !`.
* `#` followed by any number (_n_) will always select the _n_th angel in a string of angels related along the current knot (`&`).
* `angel #0` (rather than `angel #1`) selects the root angel, because there's no angel at its ‘left’ in the default `parent > < child` relationship string.
* Steps right of a filter are only jogged every time the all the asterisk placeholders (`*`) in the filter match a _new_ event. Or are the steps _within_ the filter then jogged?
* Filters point left and right, to steps within the superpath: `step left \ { filter } / step right`
* Filters match events (`*`). An event can be:
  * a creation event (`*!`),
  * a deletion event (`*-`),
  * a query event (`*?`). or
  * a count event (`*#`).

## Angels don't exist

Everything in the Angel universe (read: _namespace_) is an angel. Angels are _not_ objects, nor do they point to a reference an object of some kind. (Angels do not point; they are pointed to!)

## Angels are related to other angels

Angels are imaginary endpoints for relationships: `endpoint 1 \ < relationship > / endpoint 2`. Relationships can be unidirectional (`angel X \ unidirectional relationship pointing to Y > < unidirectional relationship pointing to X / angel Y`), or bidirectional (`angel X \ < bidirectional relationship > / angel Y`). Angels exist by the grace of them being related to other angels. They are useful fictions that lead an ephemeral existance until they are no longer needed.

The following example relates `angel 1` to `angel 2` through `relationship A` and `relationship B`, `angel 1` to `angel 3` through `relationship C`, and `angel 3` to `angel 4` as well as `angel 5` through `relationship D`:

```
[ angel 1 \ relationship A > < relationship B / angel 2 ]
[ angel 1 \ < relationship C / angel 3 ]
[ angel 3 \ relationship D > / angel 4 ]
[ angel 3 \ relationship D > / angel 5 ]
```

Relationships are themselves angels. Does that mean that it's turtles all the way down? Yes, every‘thing’ within the Angel system is an angel.

An angel can only be used as a relationship when it derives from `angel nexus` somehow. (More about inheritance later.)

## Stepping, left and right

The point of the _step left indicator_ (`\`) and the _step right indicator_ (`/`) is that relationships can point at them. Relationship point either to the left (to a left step), or to the right (to a right step):

```
[ Donald Duck \ < nephew / Huey ]
[ Dewey \ nephew > Donald Duck ]
[ Huey \ < brother > / Dewey ]
```

`\` denotes a step left, back to the previous angel(s); `/` denotes a stop right, to the following angel(s).

For subsequent steps to the right (`/`) along the same relationship axis, the relationship can be omitted: `angel M \ < relationship that will be used thrice / angel N / angel O / angel P`. That is semantically identical to: `angel M \ < relationship that will be used thrice / angel N \ < relationship that will be used thrice / angel O \ < relationship that will be used thrice / angel P`.

Whether the step left is implicit or explicit, the step pattern is always either:

* left, right, left, right, left, right;
* left, right, up, up, left, right (see next section).

```
[ Huey \ nephew > / Donald Duck \ < love interest > / Daisy Duck \ < love interest > / Gladstone Gander ]
```

## Piling up angels (sets)

Besides left and right, steps can also be _up_: `Donald Duck \ < nephew / Huey | Dewey | Louie`. `Huey`, `Dewey` and `Louie` are all `nephew`s of `Donald Duck`, not of each other (which they would be if their relationship was described as `Donald Duck \ < nephew / Huey / Dewey / Louie`).

In BULL, `|`—the _step up indicator_—extends the _set_ of angels that is being stepped to or stepped from. It must either precede a step left indicator (`\`) or succeed a step right indicator (`/`).

## Angels don't exist, but they can be defined

Angels aren't objects. They don't have a physical representation. They aren't objects. They're just imaginary endpoints for relationships. To imagine a new angel into existence, the `!`—_angel definition_—placeholder is used:

```
angel 1 \ < relationship C / !
```

And thus an angel is defined. Mind you, though: defining something is not the same as creating something!

## Because angels can't be created, they also can't be destroyed

Angels disappear when they are forgotten. Since an angel is only ever an imaginary endpoint for a relationship, how it can be forgotten is by unlinking it from all other angels:

```
angel to be undefined \ # = 0 > < # = 0
```

There's a shorthand, so that you don't have to jump through these hoops:

```
angel to be undefined # = 0
```

If we were to undefine the angel (and any other angels) related along `relationship C` to `angel 1` from the previous example:

```
angel 1 \ < relationship C / # = 0
```

It's important to understand that the shorthand is equivalent to the long form. This becomes important when you are trying to match specific unlinking events in a filter.

## Querying angels

Get to `angel 4` and `angel 5` without knowing either `angel 5`, `angel 4` or `angel 3` their names:

```
angel 1 \ < relationship C / ? \ relationship D > / ?
```

`?` is the _angel unknown_ placeholder.

## Multiple steps can be organized into paths (`[]`)

```
[ angel that will be left-stepped to
    \ < rel 1 / angel that will be right-stepped to and then left-stepped
    \ < rel 1 / another right-stepped-to angel
]
```

A static path begins with `[` and ends with `]`. There are also dynamic paths (enclosed in `()`) and filters (enclosed in `{}`).

A path is walked …

* … as soon as it's defined, in the case of a static path;
* … as soon as a command argument is invoked, in the case of a dynamic path;
* … as soon as a pattern is recognized, in the case of a filter.

The relationships defined in a path don't pop into existence until the path is actually walked. Once defined, the relationship between two angels is modelled as an `angel link`. An `angel link` has itself a `link to` link, a `link from` link, and belongs to a `link nexus`. When a link is symmetrical, it has a `symmetrical link` relationship to its opposite, and visa versa.

### Heavy steps

Some steps—if they are heavy—leave an imprint. A step is made heavy by doubling the `\` or `/`.

```
[ angel 1 \ < relationship C / ? \ relationship D > // ? ]
```

The imprinted angels in a path are the angels that can be pointed at in the superpath:

```
[ angel 1 \ rel. C / ? \ rel. D > // ? ] \ < rel. E / ?
```

The final unknown angel (`?`) at the right would be the angel related along `rel. E` to the final unknown angel in the subpath, preceded by the heavy step right (`//`).

When a step up indicator—`|`—is doubled, both the step at the left _and_ the step at the right are made heavy and will leave an imprint.

It doesn't matter to the superpath whether imprints of steps in the subpath were from left steps, right steps or steps up. They end up in a single pile.

### Heavy paths

A whole path can be made heavy, allowing stepping onto _it_ rather than its imprints:

```
[[ I \ < am / ? / a / complicated path ]] \ < angel name / I am now a complicated path with a name !
```

Heavy paths can be reused in another (part of the super)path. They can be called by name:

```
[[ ^ \ < sister / ? \ < father // ? ]] \ < angel name / sister's father !
[ somebody \ < same father ?? > / sister's father ]
```

Within the context wherein the heavy path is defined, only the imprint of the path itself ends up in the step left of the superpath. Its steps are not jogged yet. Then, in the calling context, the path is jogged and the imprints from its heavy steps and placeholders seated in its place.

### Recursion and the superpath

* A path can refer to its own imprint by means of `[]`, which allows for recursion.
* A subpath can refer to its superpath's imprint by means of `[^]`.
* To refer to the path itself, not its imprint, the brackets need to be doubled, as in `[[]]` or `[[^]]`.
* `^` without surrounding `[]` is used to refer to the most recent step left (`\`) in the superpath.
* **There is no way to refer to the most recent step right in the superpath**, because this has no use.

These are all placeholders, so they have to be suffixed by a step left indicator (`\`), prefixed by a step right indicator (`/`), separated by a step up indicator (`|`), or ‘inside’ relationship indicators (`<` and/or `>`).

```
[ a1 \ < rA / [ ^ \ < rB / ? \\ ] \\ ]
```

The above path would relate `a1` along `rA` to the angel(s) unknown (`?`) related along `rB` to `a1`. The angel(s) unknown would be the only angel(s) in the path's imprint.

## Querying relationships

Are `angel 1` and `angel 2` related through `relationship A`?

```
angel 1 \ relationship A ?? > / angel 2
```

(How) are `angel 1` and `angel 2` related?

```
angel 1 \ ? >> << ? / angel 2
```

Like steps, points (`>` and `<`) can be made heavy to leave imprints of the queried relationships for the superpath.

## Defining relationships

```
[[
  ^ \ ? >> / ?
]] \ < angel name / all relationships TO other angels !
```
```
my angel \ < all relationships TO other angels // ?
```

[**Epiphany?** Is there no difference between (defining) a relationship and a regular angel? Does there need to be? Isn't that what I liked about Semantic MediaWiki?]

## What a relationship _is_, in Angel terms

A relationship is an Angel—that means that its somehow a descendant of _the_ `angel`. A relationship can point from any angel to any other angel, and this is where it gets funky: these endpoints can be BULL placeholders (such as `@`, `?`, `!`, or `#`). Remember, though, Angel itself is a reflexive, self-aware language. That means that whatever is a placeholder BULL must also map to some type of angel, or it simply wouldn't exist within the Angel universe and there would be nothing to reflect upon, in which case BULL would not be an Angel-compliant language. BULL _is_ an Angel-compliant language, which means that paths, steps, points and placeholders all have a proper representation as angels.

On the Angel level, there's no distinction between steps left, steps right, and steps up. These are linearilizations such as necessary when expressing something multidimensional in a one-dimensional string of characters, like the computer language BULL. Instead there's just an `angel step`, which steps _from_ an angel (`step from`), and _to_ another angel (`step to`), along a relationship (`step nexus`). A step may be a `symmetrical step`.

## Dynamic paths and command arguments

A type of angel path that must always be heavy is a dynamic path. [So why have a distinct dynamic path type _at all_?]

```
[ (( something dynamic that happens )) \ < relationship A / B ]
```

Heavy dynamic paths are not walked until the moment that a _command argument_ (`@`) placeholder is found that relates along the _command argument_ axis:

```
B \ relationship A > // @
```

---

```
[ @ \\ sum > / #3 | #5 ]
```

could return `#8`.

Within `()`, the command caller context can be referenced using the `^@`—angel caller—placeholder. More precisely, `^@` references the precise step that invokes the `@` placeholder in the calling context. It wouldn't make sense to, for instance, refer to the last step left in the calling context as the `^` placeholder does, because when defining the dynamic path there's no way to know whether it will be called at a left step, a right step, a step up or as a point.

----

A command definition is denoted by `(` and `)`. A non-heavy command is somewhat (but not wholly) comparable to an anonymous/inline function in traditional programming languages.

A command definition may contain one or more _command argument_ (`(@)`) definitions:

```
(
  (@) \ male sexual partner > < female sexual partner / (@)
  (@) \ sexual produce > / ()
)
```

## Lengths and strings

To get the number of `relative`s of `my angel`:

```
[ my angel \ < relative // # ]
```

To string angels together:

```
first A \ previous > & < next / second A & third A & fourth A & fifth A
```

Semantically, this is no different from just continuing to step right. Steps are, in fact, substrings of a path.

```
first A \ previous > < next / second A / third A / fourth A / fifth A
```

Regardless of this, `&` _is_ convenient, because the knot won't change if you use different relationship axes along the path.

When used together with the _unknown angel_ placeholder (`&?`), `&` means something different than when used as a _string knot_ indicator (as above). The below gets the angel next to `first A`, and next to the angel next to `first A`, and so on:

```
first A \ & < next // &?
```

`&?` together become the _untie_ indicator.

Counts (to determine the string length) can also be done in this manner:

```
first A \ & < next // &#
```

`&#` doesn't exactly represent the string length, because only the substrings after `#0` will be counted.

Dynamic strings allow you to unfold a set of angels into a sorted sequence:

```
lots of angels \ greater than or equals > & < less than // &@
```

## Angels have parents and can have children

Every angel descends from `angel`. (Well, `angel` itself doesn't. The zeroth angel has to be willed into being when angels don't yet exist. This is done by Atheu. Atheu, in Angel parlance, is a kind of atheist that wishes to believe. In other words: it is what bootstraps the entire Angel system. It brings to live the Angel universe.)

To make an angel descend from another angel:

```
Van der Molen #0 / Rowan van der Molen !
```

`Rowan van der Molen` will be a new `angel child` of `angel parent` `van der Molen`. Child angels inherit all their parents' names. Without making use of the rule that **the default relationship axis is the `angel parent >< angel child` relationship**, the above example can be made more verbose:

```
Van der Molen \ angel parent > & < angel child / #0 & Rowan van der Molen !
```

The `#0` is necessary because, otherwise, every angel that inherited the `Van der Molen` name would have become a parent of the new `angel child`. `Van der Molen` refers to the set of all angels whose `angel name` is `Van der Molen`. `#` followed by a number (in this case `#0`) selects the angels in that set which have the specified number of other angels (in this case none whatsoever) at their left along the current relationship axis.

Because angels are _defined_ rather than _created_, their ancestry can change after their initial definition. That is a mere matter of relating new parents to them.

## Angels inherit their parents' relationships

An angel inherits the relationships of every of its parents. There's no conflict resolution of any kind. At the same time, there's no limit to the restrictions that can be added via event filters. Using the event filter mechanism, it is trivial to say that one relationship (such as between an `angel parent` and an `angel child`) precludes another relationship. Firewalls _within_ your software, baby! It's turtles all the way up!

* Each angel (except _the_ `angel`) has at least one parent angel: `Duck \ angel parent >< angel child / Donald Duck !`.
* The `angel parent >< angel child` relationship axis is also the default relationship axis, if no relationship has yet been specified at that step in a path: `[ Duck #0 / Donald Duck ! ]`
* Angel names are inherited from each angel's ancestors. (`Donald Duck` can be called `Duck` at the same time.)
* `Duck` refers to the _complete set_ of angels with the `Duck` name.
* `angel` is in each angel's set of names. Most angels inherit the name, except _the_ `angel`, from which all the other angels inherit, directly or indirectly.
* To select only the first angel with a given name, `#0` can be used: `[ angel #0 ]`.
* That is because the default relationship axis in each new path is `parent > < child`.
* The default relationship axis _is not_ a knot; it is `parent >< child`, _not_ `parent >&< child`.

## A path can be triggered by an event

```
angel 1 \ { ^ \ < relationship D / * \ etc. }
{ angel 1 \ < relationship D / * \ etc. }
```

The steps from `*` will be walked whenever something ‘new’ is related to `angel 1` through `relationship D`.

The enclosing `{}` separate the steps that are always executed to the steps that are taken whenever the filter within `{}` matches an event. `{}` and the steps within represents a _filter_. A filter is a kind of path.

This same filter can also be made to match anytime that anything is related along `relationship D` to anything else:

```
{ * \ < relationship D / * \ continue along the path… }
```

You could say that, if `?` means _whatever_, `*` means _whenever_.

`*` can be used to match the creation & destruction of endpoints (as in `/ *!` and `/ *-`, respectively), as wel as the creation & destruction of relationships (as in `a \ <*> / b` or `a \ < * / b`).

* Filters point left and right, to steps within the superpath: `step left \ { filter } / step right`
* Filters match events (`*`). An event can be:
  * a definition event (`*!`),
  * a deletion event (`*-`),
  * a query event (`*?`). or
  * a count event (`*#`).

Events can also be forbidden to happen:

```
angel 1 \ { ^ \ < relationship E / * = 0 }
```

Nothing is then allowed to be related to `angel 1` along `relationship E`. This allows one to to basically ‘firewall’ anything you want, on any level of all the software within the Angel system, which, in the Angel ideal, is _all_ the software.

If you want to filter unlinking events:

```
{ Donald Duck \ < nephew / *- \ Decide what to do about Donald's missing nephew. }
```

`* \` matches the newly defined angel; `-* \` matches the just-unlinked angel.

Events occur implicitly whenever angels are defined or undefined. There's no notion of an explicit event, nor would it add expressivity, because angels can appear and disappear at will.

Instead of explicit events (or ‘signals’, as Qt would call them), Angel has filters (which are a bit like Qt's ‘slots’). Filters match a pattern. Patterns can be of arbitrary complexity. The concrete occurance of a pattern is called an _event_. A _filter_ is the non-distinct stage of an _event_. Both stages are _patterns_. An event may match any number of filters. Like already mentioned, there's no special syntax for defining events, nor is there a need.

Often, you'll want to relate relationships:

```
{
  { * paternal bro A \ < paternal brother > / * paternal bro B }
  \ son > < father / ? \ < son
}
```

One example of a relationship between relationships is that of superstring/substring and among substrings.

```
{ pattern }
```

Like paths, patterns can be made heavy by doubling the `{}`:

```
{{ heavy pattern }}
```

When a filter matches an event, this in turn triggers an event of its own. This event can be matched by naming the filter:

```
{ Donald Duck \ < nephew / new Donald Duck nephew about to receive a random cap color !* \ < cap color / @ \ < random color }
{ * new Donald Duck nephew about to receive a random cap color \
```

The order of `!*` versus `*!` or `* name` vs `name *` matters!

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


*TODO:* Are filters daemons?

## BULL indicator summary

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

## BULL indicator combinations and their meanings

| Indicators   |                                                   |
| ------------ | ------------------------------------------------- |
| `^@`         | The calling context (can only be used within `()`)|
| `^*`         | The event that triggered the filter               |
| `^~`         | The generic pattern's _concrete_ context          |
| `?!`         | Define endpoint if it doesn't already exist       |
| `&#`         | The number of subsequent substrings               |
| `&#0`        | The left-most substring in a superstring          |

## Angel builtins

* `angel`
* `angel / angel buffer !`
  - `angel buffer / numeric buffer !`
    - `nummeric buffer / integer buffer !`
      - `integer buffer / positive integer buffer!`
      - `integer buffer / negative integer buffer!`
    - `nummeric buffer / decimal buffer !`
  - `angel buffer / character string buffer !`
    - `character string buffer / Unicode character buffer !`
  - `angel buffer / byte string buffer !`
    - `byte string buffer / UTF-8 buffer !`
* `angel / angel command !`

## OxOS types

* `angel buffer / picture buffer !`
* `byte string buffer / picture representation buffer !`
* `picture representation buffer / JPEG image !`
* `picture representation buffer / PNG image !`
* `picture representation buffer / BMP image !`


> The goal of Computer Science is to build something that will last at least until we've finished building it. – BigSmoke

<!-- :set expandtab tabstop=2 shiftwidth=2 wrap=100 : -->
