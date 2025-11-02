// #include <iostream>

// int main()
// {
//     int *ptr;
//     int value = 5;
//     ptr = &value;
//     std::cout << "Value: " << *ptr << std::endl;
//     return 0;
// }


#include <iostream>
using namespace std;

// 值传递函数
void passByValue(int num) {
    num = 100;  // 修改的是局部副本
    cout << "函数内(值传递): num = " << num << endl;
}

// 指针传递函数
void passByPointer(int* ptr) {
    *ptr = 200;  // 修改指针指向的实际值
    cout << "函数内(指针传递): *ptr = " << *ptr << endl;
}

int main() {
    int a = 10;
    int b = 20;
    
    cout << "调用函数前:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    
    // 值传递调用
    passByValue(a);
    cout << "调用值传递函数后: a = " << a << endl;
    
    cout << "------------------------" << endl;
    
    // 指针传递调用
    passByPointer(&b);
    cout << "调用指针传递函数后: b = " << b << endl;
    
    return 0;
}