/*
 * @brief Advent Of Code 2022
 *
 * Day 1
 */

#ifndef _AOC_DAY_1_
#define _AOC_DAY_1_

#include <fstream>
#include <string>

namespace aoc::day1
{

std::vector<std::uint64_t> get_all_calories(std::vector<std::string> const& calories)
{
    auto ret = std::vector<std::uint64_t>{};

    auto elf_calorie = std::uint64_t{};
    for (auto const& calorie : calories)
    {
        if (calorie.empty())
        {
            ret.push_back(elf_calorie);
            elf_calorie = 0;
            continue;
        }

        auto value = std::stoul(calorie);
        elf_calorie += value;
    }

    // add last elf which is not ended with empty line
    ret.push_back(elf_calorie);

    return ret;
}

}// namespace aoc::day1

#endif// _AOC_DAY_1_
