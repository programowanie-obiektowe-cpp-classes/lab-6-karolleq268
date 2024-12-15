#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    auto lam = [](Human& person) { person.birthday(); };
    for_each(people.begin(), people.end(), lam); 

    auto lambda = [](Human& person) 
    { 
        char result = 'y';
        if (person.isMonster()) 
        {
            result = 'n';
        }
        return result;
    };

    transform(people.rbegin(), people.rend(), retval.begin() ,lambda);

    return retval;
}
