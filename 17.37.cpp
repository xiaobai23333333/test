/*
 * @Author: wwb
 * @LastEditors: wwb
 * @email: AbeRanDy@163.com
 * @github: https://github.com/xiaobai23333333
 * @Date: 2021-07-06 20:59:47
 * @LastEditTime: 2021-07-06 21:16:35
 * @Description: 用未格式化版本的getline逐行读取一个文件。
 * @FilePath: \Chapter17\17.37.cpp
 */
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream file("./data/test.txt");
    if (file)
        cout << 1 << endl;
    char sink[250];
    while (file.getline(sink, 250, ' '))
    {
        cout << sink << endl;
    }
    cin.get();
}
