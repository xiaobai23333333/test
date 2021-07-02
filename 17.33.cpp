/*
 * @Author: wwb
 * @LastEditors: wwb
 * @email: AbeRanDy@163.com
 * @github: https://github.com/xiaobai23333333
 * @Date: 2021-07-02 10:31:59
 * @LastEditTime: 2021-07-02 11:13:04
 * @Description: Modify here please
 * @FilePath: \Chapter17\17.33.cpp
 */
#include <iostream>
using std::cout;
using std::endl;

#include <fstream>
using std::ifstream;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <random>
using std::default_random_engine;
using std::uniform_int_distribution;

#include <ctime>
using std::time;

#include <algorithm>
using std::find_if;
using std::sort;

#include <utility>
using std::pair;

int main()
{
    typedef pair<string, string> ps;
    ifstream i("./data/d.txt");
    vector<ps> dict;
    string str1, str2;
    //read wirds from dictionary
    while (i >> str1 >> str2)
    {
        dict.emplace_back(str1, str2);
    }
    i.close();
    //sort words in vector
    sort(dict.begin(), dict.end(), [](const ps &_ps1, const ps &_ps2)
         { return _ps1.first < _ps2.first; });
    i.open("./data/i.txt");
    default_random_engine e(time(0));
    //read words from text
    while (i >> str1)
    {
        //find words in dictionary
        vector<ps>::const_iterator it = find_if(dict.cbegin(), dict.cend(), [&str1](const ps &_ps)
                                                { return _ps.first == str1; });
        if (it == dict.cend())
        {
            //write it itself
            cout << str1 << ' ';
        }
        else
        {
            // get random meaning of word
            uniform_int_distribution<unsigned> u(0, find_if(dict.cbegin(), dict.cend(),
                                                            [&str1](const ps &_ps)
                                                            { return _ps.first > str1; }) -
                                                        it - 1);
            // write random meaning
            cout << (it + u(e))->second << ' ';
        }
    }
    std::cin.get();
    return 0;
}