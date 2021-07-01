/*
 * @Author: wwb
 * @LastEditors: wwb
 * @email: AbeRanDy@163.com
 * @github: https://github.com/xiaobai23333333
 * @Date: 2021-06-30 14:53:15
 * @LastEditTime: 2021-07-01 17:46:40
 * @Description: 正则表达式 将九位的数字邮政编码的格式转化为 ddddd-dddd
 * @FilePath: \Chapter17\17.27.cpp
 */
#include <iostream>
#include <regex>
#include <string>

using namespace std;

string pattern = "(\\d{5})([ .-])?(\\d{4})";
string fmt = "$1-$3";

regex r(pattern);
string s;

int main()
{
    while (getline(cin, s))
    {
        smatch result;
        regex_search(s, result, r);
        if (!result.empty())
            cout << result.format(fmt) << endl;
        else
            cout << "Sorry, No match." << endl;
    }
}