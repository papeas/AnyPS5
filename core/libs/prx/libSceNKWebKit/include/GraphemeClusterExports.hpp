#pragma once

#include "SceTypes.hpp"
#include "prx/libSceNKWebKit/src/WtfStringAbi.hpp"

#include <cstddef>
#include <optional>

namespace NKWebKit::WtfAbi {

struct GraphemeClusterIteratorImpl {
    StringView string;
    std::optional<void*> breakIterator;
    unsigned index;
    unsigned indexEnd;
};

struct GraphemeClusterIterator {
    const GraphemeClusterIteratorImpl* impl;
};

static_assert(sizeof(GraphemeClusterIteratorImpl) == 40);
static_assert(offsetof(GraphemeClusterIteratorImpl, index) == 32);
static_assert(offsetof(GraphemeClusterIteratorImpl, indexEnd) == 36);
static_assert(sizeof(GraphemeClusterIterator) == 8);

}

extern "C" {

unsigned APS5_VABI _ZN3WTF19numGraphemeClustersENS_10StringViewE(NKWebKit::WtfAbi::StringView string);
unsigned APS5_VABI _ZN3WTF30numCodeUnitsInGraphemeClustersENS_10StringViewEj(NKWebKit::WtfAbi::StringView string, unsigned numGraphemeClusters);
bool APS5_VABI _ZNK3WTF10StringView16GraphemeClusters8IteratoreqERKS2_(const NKWebKit::WtfAbi::GraphemeClusterIterator* self, const NKWebKit::WtfAbi::GraphemeClusterIterator* other);

}
