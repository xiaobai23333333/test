/*
 * @Author: wwb
 * @LastEditors: wwb
 * @email: AbeRanDy@163.com
 * @github: https://github.com/xiaobai23333333
 * @Date: 2021-06-08 11:25:24
 * @LastEditTime: 2021-06-08 14:42:08
 * @Description: Modify here please
 * @FilePath: \Chapter17\17.10.cpp
 */
#include <iostream>
#include <vector>
#include <bitset>

using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 5, 8, 13, 21};
    bitset<32> bset;

    for (auto i : v)
        bset.set(i);
    bitset<32> bset2;
    for(unsigned i=0;i!=32;++i)
        bset2[i] = bset[i];
    cout<<bset<<endl;
    cout<<bset2<<endl;
    cin.get();
}
