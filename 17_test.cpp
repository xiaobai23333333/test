/*
 * @Author: wwb
 * @LastEditors: wwb
 * @email: AbeRanDy@163.com
 * @github: https://github.com/xiaobai23333333
 * @Date: 2021-07-03 17:45:44
 * @LastEditTime: 2021-07-06 20:32:49
 * @Description: Modify here please
 * @FilePath: \Chapter17\17_test.cpp
 */
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    //控制bool的格式
    cout << "default bool values: " << true << " " << false << "\n"
         << "alpha bool values: " << boolalpha << true << " " << false << endl;
    cout << '\n';

    //控制整型值的进制
    cout << "default: " << 20 << " " << 1024 << endl;
    cout << "octal: " << oct << 20 << " " << 1024 << endl;
    cout << "hex: " << hex << 20 << " " << 1024 << endl;
    cout << "decimal: " << dec << 20 << " " << 1024 << endl;
    cout << '\n';

    //在输出中指出进制  0x-16进制   0-8进制 空-10进制
    cout << showbase;
    cout << "default: " << 20 << " " << 1024 << endl;
    cout << "in octal: " << oct << 20 << " " << 1024 << endl;
    cout << "in hex: " << hex << 20 << " " << 1024 << endl;
    cout << "in decimal: " << dec << 20 << " " << 1024 << endl;
    cout << noshowbase;
    cout << '\n';

    //控制浮点数格式
    cout << "Precision: " << cout.precision() //返回当前精度
         << ", Value: " << sqrt(2.0) << endl;
    cout.precision(12);
    cout << "Precision: " << cout.precision()
         << ", Value: " << sqrt(2.0) << endl;
    cout << setprecision(3);
    cout << "Precision: " << cout.precision() //返回当前精度
         << ", Value: " << sqrt(2.0) << endl;
    cout << setprecision(6) << '\n';

    //指定浮点数计数法
    cout << "default format: " << 100 * sqrt(2.0) << '\n'
         << "scientific: " << scientific << 100 * sqrt(2.0) << '\n'
         << "fixed decimal: " << fixed << 100 * sqrt(2.0) << '\n'
         << "hexadecimal: " << hexfloat << 100 * sqrt(2.0) << '\n'
         << "use defaults: " << defaultfloat << 100 * sqrt(2.0) << "\n\n";

    //打印小数点
    cout << 10.0 << endl;
    cout << showpoint << 10.0
         << noshowpoint << endl;
    cout << '\n';

    int i = -16;
    double d = 3.14159;
    cout << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n';
    cout << left
         << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n';
    cout << right
         << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n';
    cout << internal
         << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n';
    cout << setfill('#')
         << "i: " << setw(12) << i << "next col" << '\n'
         << "d: " << setw(12) << d << "next col" << '\n'
         << setfill(' '); //恢复正常的补白字符
    //控制输入格式
    char ch;
    cin >> noskipws;
    while (cin >> ch)
    {
        cout << ch;
    }
    cin.get();
}