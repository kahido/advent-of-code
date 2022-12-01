/*
 * @brief Advent Of Code 2022
 *
 * Utility
 */

#ifndef _AOC_UTILITY_
#define _AOC_UTILITY_

#include <fstream>
#include <string>

namespace aoc
{

constexpr char nl = '\n';

std::vector<std::string> load_input(char const* const file_name)
{
    auto ret = std::vector<std::string>{};

    auto input = std::ifstream(file_name);
    if (input.is_open())
    {
        auto line = std::string{};
        while (getline(input, line))
        {
            ret.push_back(line);
        }
    }

    return ret;
}

}// namespace aoc

#endif// _AOC_UTILITY_
