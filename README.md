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

Angels aren't objects. They don't have a phsyical representation. They aren't objects. They're just an imaginary endpoints for relationships. To imagine a new angel into existence, the `!` placeholder is used:

```
angel 1 \ < relationship C / !
```

### Paths (static)

A path begins with `[` and ends with `]`. (Dynamic paths begin and end with `(` and `)` respectively, but more about that later.)

#### Heavy steps

```
[ angel 1 \ < relationship C / ? \ relationship D > // ? ]
```

#### The superpath 

```
[ angel 
```

### Dynamic paths

```
[ ( something dynamic that happens ) < relationship A / B ]
```

### Querying relationships

*Not so sure about this part*

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
[ @ \\ < sum / #3 | #5 ]
```

Would return `#8`.

### Implied relationships, events, triggers, and filters

```
angel 1 \ < relationship D / * \
```

The path will further unfold from `*` as soon as something ‘new’ is related to `angel 1` through `relationship D`.

You can create a new event type:

```
{ filter }
```

### Indicator summary

| Indicator    | Imprintable? |                         |
| ------------ | ------------:| ----------------------- |
| `\`          |      (heavy) | step left               |
| `/`          |      (heavy) | step right              |
| `|`          |              | step forward            |
| `<`          |      (heavy) | point left              |
| `>`          |      (heavy) | point right             |
| `?`          |              | unknown angel           |
| `!`          |              | defined angel           |
| `*`          |              | possible angel          |
| `~`          |              | dynamic path/pattern    |

> The goal of Computer Science is to build something that will last at least until we've finished building it.
