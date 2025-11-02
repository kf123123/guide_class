#include <iostream>
#include <string>
struct Student {
    std::string name;
    int age;
    double score;
};

// 初始化方法对比
Student s1 = {"张三", 20, 85.5};  // 列表初始化
Student s2{"李四", 19, 90.0};    // C++11统一初始化
int main() {

    std::cout << "Student 1: " << s1.name << ", Age: " << s1.age << ", Score: " << s1.score << std::endl;
    std::cout << "Student 2: " << s2.name << ", Age: " << s2.age << ", Score: " << s2.score << std::endl;

    return 0;
}