#include <iostream>

class Date // 现在是 class 而不是 struct
{
    // class 成员默认是是 private, 只能被其它本类的成员访问
    int m_year {};     // 默认 private
    int m_month {};    // 默认 private
    int m_day {};      // 默认 private

    void print() const // 默认 private
    {
        // 私有成员可以在成员函数中访问到
        std::cout << m_year << '/' << m_month << '/' << m_day;
    }
};

int main()
{
    Date today { 2020, 10, 14 }; // 编译失败: 无法再使用聚合初始化

    // 私有成员不能在 public 域内访问
    today.m_day = 16; // 编译失败: m_day 是 private
    today.print();    // 编译失败: print() 是 private

    return 0;
}