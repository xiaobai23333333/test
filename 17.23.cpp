/*
 * @Author: wwb
 * @LastEditors: wwb
 * @email: AbeRanDy@163.com
 * @github: https://github.com/xiaobai23333333
 * @Date: 2021-06-30 11:19:53
 * @LastEditTime: 2021-06-30 11:33:10
 * @Description: Modify here please
 * @FilePath: \Chapter17\17.23.cpp
 */
#include <iostream>
using std::cin;

#include <string>
using std::string;

#include <regex>
using std::regex;
using std::smatch;
using std::sregex_iterator;
int main()
{
    string pattern = "(\\d{5})(-)?(\\d{4})?\\b";
    regex r(pattern);
    smatch m;
    string s;

    while (getline(cin, s))
    {
        //! for each matching zipcode number
        for (sregex_iterator it(s.begin(), s.end(), r), end_it;
             it != end_it; ++it)
        {
            //! check whether the number's formatting is valid
            if (valid(*it))
                cout << "valid zipcode number: " << it->str() << endl;
            else
                cout << "invalid zipcode number: " << s << endl;
        }
    }
}

bool valid(const smatch &m)
{

    if ((m[2].matched) && (!m[3].matched))
        return false;
    else
        return true;
}