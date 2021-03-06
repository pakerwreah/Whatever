//
// Created by Paker on 03/09/21.
//

#pragma once

#include "Collection.h"
#include <ostream>

namespace PK {

    class StringView : public Collection<char> {
    protected:
        char *m_data = nullptr;
        size_t m_length = 0;

        StringView() = default;

    public:
        StringView(const char *data);
        StringView(const char *data, size_t length);

        const char *data() const;
        size_t length() const override;

        StringView substring(size_t start, size_t length) const;
        int indexOf(const StringView &other) const;
        bool contains(const StringView &other) const;

        char *begin() const override;
        char *end() const override;
    };

    bool operator==(const StringView &lhs, const char *rhs);
    bool operator!=(const StringView &lhs, const char *rhs);
    std::ostream &operator<<(std::ostream &os, const StringView &string);
}
