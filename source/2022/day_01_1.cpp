/*
 * Advent Of Code 2022
 *
 * Day 1 - Part 1
 *
 * The jungle must be too overgrown and difficult to navigate in vehicles or access from the air; the Elves' expedition
 * traditionally goes on foot. As your boats approach land, the Elves begin taking inventory of their supplies. One
 * important consideration is food - in particular, the number of Calories each Elf is carrying (your puzzle input).
 *
 * The Elves take turns writing down the number of Calories contained by the various meals, snacks, rations, etc. that
 * they've brought with them, one item per line. Each Elf separates their own inventory from the previous Elf's
 * inventory (if any) by a blank line.
 *
 * In case the Elves get hungry and need extra snacks, they need to know which Elf to ask: they'd like to know how many
 * Calories are being carried by the Elf carrying the most Calories.
 *
 * Find the Elf carrying the most Calories. How many total Calories is that Elf carrying?
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

std::uint64_t calculate_most_calories(std::vector<std::uint64_t>& calories)
{
    // auto elf = std::size_t{ 1 };
    // for (auto const& calorie : calories)
    // {
    //     std::cout << "Elf " << elf << " carry " << calorie << " calories!" << aoc::nl;
    //     ++elf;
    // }

    std::sort(calories.begin(), calories.end());

    auto const ret = calories.back();
    return ret;
}

}// namespace aoc::day1

int main()
{
    std::vector<std::string> input_small = aoc::load_input("input_01_small.txt");
    auto calories_small = aoc::day1::get_all_calories(input_small);

    auto const most_calories_small = aoc::day1::calculate_most_calories(calories_small);
    std::cout << "Elf carrying most calories carry " << most_calories_small << " calories!" << aoc::nl;

    std::vector<std::string> input_big = aoc::load_input("input_01_big.txt");
    auto calories_big = aoc::day1::get_all_calories(input_big);

    auto const most_calories_big = aoc::day1::calculate_most_calories(calories_big);
    std::cout << "Elf carrying most calories carry " << most_calories_big << " calories!" << aoc::nl;

    return 0;
}
