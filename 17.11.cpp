/*
 * @Author: wwb
 * @LastEditors: wwb
 * @email: AbeRanDy@163.com
 * @github: https://github.com/xiaobai23333333
 * @Date: 2021-06-08 14:49:04
 * @LastEditTime: 2021-06-08 15:22:00
 * @Description: Modify here please
 * @FilePath: \Chapter17\17.11.cpp
 */
#include <iostream>
#include <bitset>

//class Quiz
template <std::size_t N>
class Quiz
{
private:
    std::bitset<N> bitquiz;

public:
    //constructors
    Quiz() = default;
    Quiz(std::string &s) : bitquiz(s) {}
    //generate grade
    template <std::size_t M>
    friend std::size_t grade(Quiz<M> const &, Quiz<M> const &);
    //print
    template <std::size_t M>
    friend std::ostream &operator<<(std::ostream &, Quiz<M> const &);
    //update bitset
    void update(std::pair<std::size_t, bool>);
};

template <std::size_t N>
void Quiz<N>::update(std::pair<std::size_t, bool> pair)
{
    bitquiz.set(pair.first, pair.second);
}

template <std::size_t M>
std::ostream &operator<<(std::ostream &os, Quiz<M> const &quiz)
{
    os << quiz.bitquiz;
    return os;
}

template <std::size_t M>
std::size_t grade(Quiz<M> const &corAns, Quiz<M> const &stuAns)
{
    auto result = stuAns.bitquiz ^ corAns.bitquiz;  //异或运算，不同为1，相同为0
    result.flip();
    return result.count();
}

int main()
{
    //Ex17_11
    std::string s = "1010101";
    Quiz<10> quiz(s);
    std::cout << quiz << std::endl;

    //Ex17_12
    quiz.update(std::make_pair(1, true));
    std::cout << quiz << std::endl;

    //Ex17_13
    std::string answer = "10011";
    std::string stu_answer = "11001";
    Quiz<5> ans(answer),stu_ans(stu_answer);
    std::cout<<grade(ans,stu_ans)<<std::endl;
    std::cin.get();
}