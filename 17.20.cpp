/*
 * @Author: wwb
 * @LastEditors: wwb
 * @email: AbeRanDy@163.com
 * @github: https://github.com/xiaobai23333333
 * @Date: 2021-06-30 09:37:07
 * @LastEditTime: 2021-06-30 09:53:49
 * @Description: Modify here please
 * @FilePath: \Chapter17\17.20.cpp
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <regex>
using std::regex;
using std::smatch;
using std::sregex_iterator;

bool valid(const smatch &m);

int main()
{
    string phone = "(\\()?(\\d{3})(\\))?([-. ])?(\\d{3})([-. ])?(\\d{4})";
    regex r(phone);
    smatch m;
    string s;
    bool valid_record;
    //read each record from the input file
    while (getline(cin, s))
    {
        valid_record = false;
        //for each matching phone number
        for (sregex_iterator it(s.begin(), s.end(), r), end_it; it != end_it; ++it)
        {
            valid_record = true;
            //check whether the number's formatting is valid
            if (valid(*it))
                cout << "valid phone number: " << it->str() << endl;
            else
                cout << "invaild phone number: " << it->str() << endl;
        }
        if (!valid_record)
            cout << "invalid record!" << endl;
    }
    return 0;
}

bool valid(const smatch &m)
{
    //if there is an open parenthesis before the area code
    if (m[1].matched)
        return m[3].matched && (m[4].matched == 0 || m[4].str() == " ");
    else
        return !m[3].matched && m[4].str() == m[6].str();
}