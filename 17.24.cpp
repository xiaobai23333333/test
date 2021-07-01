/*
 * @Author: wwb
 * @LastEditors: wwb
 * @email: AbeRanDy@163.com
 * @github: https://github.com/xiaobai23333333
 * @Date: 2021-06-30 14:30:41
 * @LastEditTime: 2021-06-30 14:40:34
 * @Description: 重写电话号码格式
 * @FilePath: \Chapter17\17.24.cpp
 */
#include <iostream>
#include <regex>
#include <string>

using namespace std;

string pattern = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})";
string format = "$2.$5.$7";
regex r(pattern);
string s;
int main()
{
    while (getline(cin, s))
    {
        cout << regex_replace(s, r, format) << endl;
    }
    cin.get();
}