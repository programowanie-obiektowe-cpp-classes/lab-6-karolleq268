#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > retval(people.size());

    std::for_each(lista.begin(), lista.end(), [&retval](Human& e) {
        e.birthday();
        retval.insert(retval.begin(), e.isMonster() ? 'n' : 'y');
    });

    return retval;
}
