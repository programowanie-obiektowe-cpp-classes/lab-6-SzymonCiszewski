#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>
    
std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());
    std::for_each(people.begin(), people.end(), [](auto& c) { c.birthday(); });
    std::transform(people.begin(), people.end(), retval.begin(), [&](auto& c) {
        if (c.isMonster())
            return 'n';
        else
            return 'y';
    });
    // Twoja implementacja tutaj

    return retval;
}

