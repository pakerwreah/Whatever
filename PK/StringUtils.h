//
// Created by Paker on 30/08/21.
//

#pragma once

#include "String.h"
#include "Collection.h"
#include "List.h"
#include <sstream>

namespace PK::StringUtils {

    template<typename T, typename I>
    String join(const Iterable<T, I> &items, const char *glue) {
        std::ostringstream os;
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it != items.begin())
                os << glue;
            os << *it;
        }
        return os.str().c_str();
    }

    List<String> split(const String &string, const String &separator);
}