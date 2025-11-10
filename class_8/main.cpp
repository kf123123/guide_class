#include <iostream>

class Date       // 将 struct 替换为 class
{
public:          // 这里行，是一个访问说明符
    int m_day{}; // 为成员变量，添加 "m_" 前缀
    int m_month{};
    int m_year{};
    // void print(); // 定义了成员函数 print
//     void print() // 定义了成员函数 print
// {
//     std::cout << m_year << '/' << m_month << '/' << m_day << std::endl;
// }
};
// void Date::print()
// {
//  std::cout << m_year << '/' << m_month << '/' << m_day << std::endl;

// }

void printDate(const Date& date)
{
    std::cout << date.m_day << '/' << date.m_month << '/' << date.m_year << std::endl;
}

int main()
{
    Date date{ 8, 11, 2025 };

    printDate(date);
    // date.print();  // 使用 (.) 来访问成员函数

    return 0;
}