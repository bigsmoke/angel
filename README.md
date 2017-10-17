# Angel

Angels don't exist. Therefore, every‘thing’ in a computer could be called an `angel`, because these ‘things’ are not really things; they're abstraction upon abstraction for what eventually boils down to processor instructions.

## BULL—BigSmoke's Unified Linking Language

If you say shit about non-existent entities, this shit is likely to be _bullshit_; hence the name for the language with which to query and describe angels: BULL.

BULL is a general-purpose computer language, and in order to serve is general purpose, it needs to be able to do only 2 things: (1) creating relationships between angels and (2) querying these relationships.

### Relating angels

Relate `angel 1` to `angel 2` through `relationship A` and `relationship B`, `angel 1` to `angel 3` through `relationship C`, and `angel 3` to `angel 4` through `relationship D`:

```
[ angel 1 \ relationship A > < relationship B / angel 2 ]
[ angel 1 \ < relationship C / angel 3 ]
[ angel 3 \ relationship D > / angel 4 ]
```

### Querying angels

Get to `angel 4`:

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

### Lengths and strings

To get the number of `relative`s of `my angel`:

```
my angel \ < relative // #
```

To string some angels together:

```
first A \ previous > & < next / second A & third A & fourth A & fifth A
```

I this semantically different just continuing to step right? (Steps are, after all, substrings of a path.)

```
first A \ previous > < next / second A / third A / fourth A / fifth A
```

`&` is convenient, because the knot won't change if you use different relationship axes along the path.

When used together with the _unknown angel_ placeholder (`&?`), `&` means something different than when used as a _string knot_ indicator (as above). The below gets the angel next to `first A`, and next to the angel next to `first A`, etc.:

```
first A \ & < next // &?
```

Counts (to determine the string length) can also be done in this manner:

```
first A \ & < next // &#
```

### Implied relationships, events, triggers, and filters

```
angel 1 \ < relationship D / *
```

The steps from `*` will be walked whenever something ‘new’ is related to `angel 1` through `relationship D`.

Events can also be forbidden to happen:

```
angel 1 \ < relationship E / *# = 0
```

This won't allow anything to be related to `angel 1` through `relationship E`.

```
{ filter }
```

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
| `@`          |              | command argument        |
| `*`          |              | angel event             |
| `~`          |              | dynamic path/pattern    |

> The goal of Computer Science is to build something that will last at least until we've finished building it.

## The Angel universe

Pretending that angels exists opens up a whole new universe, where objects dissolve in their relationships. 

```
[ 9761 VB ]
```
