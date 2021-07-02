/*
 * @Author: wwb
 * @LastEditors: wwb
 * @email: AbeRanDy@163.com
 * @github: https://github.com/xiaobai23333333
 * @Date: 2021-07-02 09:51:51
 * @LastEditTime: 2021-07-02 10:09:32
 * @Description: Modify here please
 * @FilePath: \Chapter17\17.28.cpp
 */
#include <iostream>
#include <random>
#include <string>
//default version
unsigned random_gen();
//with seed specified
unsigned random_gen(unsigned seed);
//with seed and range specified
unsigned random_gen(unsigned seed, unsigned min, unsigned max);

int main()
{
    std::string temp;
    while (std::cin >> temp)
    {
        std::cout << std::hex << random_gen(19, 1, 10) << std::endl;
    }
    return 0;
}

unsigned random_gen()
{
    static std::default_random_engine e;
    static std::uniform_int_distribution<unsigned> ud;
    return ud(e);
}

unsigned random_gen(unsigned seed)
{
    static std::default_random_engine e(seed);
    static std::uniform_int_distribution<unsigned> ud;
    return ud(e);
}

unsigned random_gen(unsigned seed, unsigned min, unsigned max)
{
    static std::default_random_engine e(seed);
    static std::uniform_int_distribution<unsigned> ud(min, max);
    return ud(e);
}