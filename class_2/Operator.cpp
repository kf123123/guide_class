#include<iostream>

int main() {
    int a=5;
    a++;
    std::cout << "a的值为" << a <<std::endl;
    ++a;
    std::cout << "a的值为" << a <<std::endl;
    std::cout << "a的值为" << a++ <<std::endl;
    std::cout << "a的值为" << a <<std::endl;
    std::cout << "a的值为" << ++a <<std::endl;
    return 0;
}