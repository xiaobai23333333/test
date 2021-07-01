/*
 * @Author: wwb
 * @LastEditors: wwb
 * @email: AbeRanDy@163.com
 * @github: https://github.com/xiaobai23333333
 * @Date: 2021-06-30 14:41:26
 * @LastEditTime: 2021-06-30 14:52:37
 * @Description: 只输出每个人的第一个电话号码
 * @FilePath: \Chapter17\17.25.cpp
 */
#include <iostream>
#include <regex>
#include <string>

using namespace std;

string pattern = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})";
string fmt = "$2.$5.$7";
regex r(pattern);
string s;

int main()
{
    while (getline(cin, s))
    {
        smatch result;
        regex_search(s, result, r);
        if (!result.empty())
        {
            cout << result.prefix() << result.format(fmt) << endl;
        }
        else
        {
            cout << "Sorry, No match." << endl;
        }
    }
}