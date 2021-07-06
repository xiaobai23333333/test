/*
 * @Author: wwb
 * @LastEditors: wwb
 * @email: AbeRanDy@163.com
 * @github: https://github.com/xiaobai23333333
 * @Date: 2021-07-06 20:33:40
 * @LastEditTime: 2021-07-06 20:42:07
 * @Description: 格式化输出
 * @FilePath: \Chapter17\17.35.cpp
 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    cout << "default format: " << sqrt(2.0) << '\n'
         << "scientific: " << scientific << sqrt(2.0) << '\n'
         << "fixed decimal: " << fixed << sqrt(2.0) << '\n'
         << "hexidecimal: " << uppercase << hexfloat << sqrt(2.0) << '\n'
         << "use defaults: " << defaultfloat << sqrt(2.0)
         << "\n\n";

    //17.36
    cout << left << setw(15) << "default format:" << setw(25) << right << 100 * sqrt(2.0) << '\n'
         << left << setw(15) << "scientific:" << scientific << setw(25) << right << 100 * sqrt(2.0) << '\n'
         << left << setw(15) << "fixed decimal:" << setw(25) << fixed << right << 100 * sqrt(2.0) << '\n'
         << left << setw(15) << "hexidecimal:" << setw(25) << uppercase << hexfloat << right << 100 * sqrt(2.0) << '\n'
         << left << setw(15) << "use defaults:" << setw(25) << defaultfloat << right << 100 * sqrt(2.0)
         << "\n\n";

    cin.get();
}