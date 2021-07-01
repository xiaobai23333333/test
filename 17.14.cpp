/*
 * @Author: wwb
 * @LastEditors: wwb
 * @email: AbeRanDy@163.com
 * @github: https://github.com/xiaobai23333333
 * @Date: 2021-06-25 14:21:22
 * @LastEditTime: 2021-06-25 15:07:19
 * @Description: Modify here please
 * @FilePath: \Chapter17\17.14.cpp
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <regex>
using std::regex;
using std::regex_error;

int main()
{
    //ex17.14
    // try
    // {
    //     regex r("[[:alnum:]]*[^c]ei[[:alpha:]]*", regex::icase);
    // }
    // catch (regex_error e)
    // {
    //     cout << e.what() << " code: " << e.code() << endl;
    // }

    //ex17.15
    regex r("[[:alpha:]]*[^c]ei[[:alpha:]]*", regex::icase);
    string s;
    // cout << "Please input a word! Input q to quit!" << endl;
    // while (cin >> s && s != "q")
    // {
    //     if (std::regex_match(s, r))
    //         cout << "Input word " << s << " is okay!" << endl;
    //     else
    //         cout << "Input word " << s << " is not okay!" << endl;
    //     cout << "Please input a word! Input 'q' to quit!" << endl;
    // }

    // cout << endl;

    //ex17.16
    r.assign("[^c]ei", regex::icase);
    cout << "Please input a word! Input 'q' to quit!" << endl;
    while (cin >> s && s != "q")
    {
        if (std::regex_match(s, r))
            cout << "Input word " << s << " is okay!" << endl;
        else
            cout << "Input word " << s << " is not okay!" << endl;

        cout << "Please input a word! Input 'q' to quit!" << endl;
    }

    cin.get();
}