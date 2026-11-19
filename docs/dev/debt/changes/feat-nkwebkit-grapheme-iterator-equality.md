# libSceNKWebKit

## add Functional

- [Grapheme cluster iterator equality](../../../core/libs/prx/libSceNKWebKit/src/GraphemeClusters.cpp) - the console layout is unverified. [WebKit 11.x](https://github.com/neonmodder123/PS5-WebKit-11.x/blob/80f77e94c63ee7202eec3d4b5b1a021dd89011ba/Source/WTF/wtf/text/StringView.cpp#L166-L244) compares the current indices in release builds. The inferred 40-byte implementation holds a 16-byte `StringView` by value and an optional [single-pointer iterator](https://github.com/neonmodder123/PS5-WebKit-11.x/blob/80f77e94c63ee7202eec3d4b5b1a021dd89011ba/Source/WTF/wtf/text/TextBreakIterator.h#L354-L367) before the index at offset 32. A null iterator or implementation throws. Closes when: measured on console.

## remove | `_ZNK3WTF10StringView16GraphemeClusters8IteratoreqERKS2_` | `DYcMsG69kBo` |
