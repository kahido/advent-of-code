/*
 * Advent Of Code 2022
 *
 * Day 1 - Part 2
 *
 * By the time you calculate the answer to the Elves' question, they've already realized that the Elf carrying the most
 * Calories of food might eventually run out of snacks.
 *
 * To avoid this unacceptable situation, the Elves would instead like to know the total Calories carried by the top
 * three Elves carrying the most Calories. That way, even if one of those Elves runs out of snacks, they still have two
 * backups.
 *
 * Find the top three Elves carrying the most Calories. How many Calories are those Elves carrying in total?
 */

#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>

#include <2022/day_01.hpp>
#include <utility.hpp>

namespace aoc::day1
{

std::uint64_t calculate_tree_most_calories(std::vector<std::uint64_t>& calories)
{
    std::sort(calories.begin(), calories.end(), [](auto a, auto b) { return a > b; });

    auto const ret = calories[0] + calories[1] + calories[2];
    return ret;
}

}// namespace aoc::day1

int main()
{
    std::vector<std::string> input_small = aoc::load_input("input_01_small.txt");
    auto calories_small = aoc::day1::get_all_calories(input_small);

    auto const most_calories_small = aoc::day1::calculate_tree_most_calories(calories_small);
    std::cout << "Top tree Elves carrying total " << most_calories_small << " calories!" << aoc::nl;

    std::vector<std::string> input_big = aoc::load_input("input_01_big.txt");
    auto calories_big = aoc::day1::get_all_calories(input_big);

    auto const most_calories_big = aoc::day1::calculate_tree_most_calories(calories_big);
    std::cout << "Top tree Elves carrying total " << most_calories_big << " calories!" << aoc::nl;

    return 0;
}
