#include <iostream>
using namespace std;

int main() {
    // 1. 基本变量引用
    int original = 100;
    int& ref = original;  // ref是original的引用（别名）
    
    cout << "=== 基本引用示例 ===" << endl;
    cout << "original的值: " << original << endl;
    cout << "ref的值: " << ref << endl;
    
    // 通过引用修改值
    ref = 200;
    cout << "通过ref修改后:" << endl;
    cout << "original的值: " << original << endl;
    cout << "ref的值: " << ref << endl;
    
    // 验证它们是同一个内存实体
    cout << "original的地址: " << &original << endl;
    cout << "ref的地址: " << &ref << endl;
    cout << "地址是否相同: " << (&original == &ref) << endl;
    
    cout << endl;
    
    return 0;
}

// #include <iostream>
// using namespace std;

// // 1. 引用作为函数参数（可以修改实参）
// void incrementByReference(int& num) {
//     num += 10;
//     cout << "函数内: num = " << num << endl;
// }

// // 2. 常量引用（避免拷贝，但不能修改）
// void printLargeObject(const string& str) {
//     cout << "字符串内容: " << str << endl;
//     // str = "修改";  // 错误：常量引用不能修改
// }

// // 3. 返回引用（可以链式调用）
// int& getMax(int& a, int& b) {
//     return (a > b) ? a : b;
// }

// int main() {
//     // 测试引用参数
//     int value = 5;
//     cout << "=== 引用参数示例 ===" << endl;
//     cout << "调用前 value = " << value << endl;
//     incrementByReference(value);
//     cout << "调用后 value = " << value << endl;
    
//     cout << endl;
    
//     // 测试常量引用
//     string longText = "这是一个很长的字符串，使用引用避免拷贝";
//     cout << "=== 常量引用示例 ===" << endl;
//     printLargeObject(longText);
    
//     cout << endl;
    
//     // 测试返回引用
//     int x = 10, y = 20;
//     cout << "=== 返回引用示例 ===" << endl;
//     cout << "原始值: x = " << x << ", y = " << y << endl;
    
//     getMax(x, y) = 100;  // 直接修改较大的那个值
//     cout << "修改后: x = " << x << ", y = " << y << endl;
    
//     // 链式调用
//     getMax(x, y) = getMax(x, y) + 50;
//     cout << "链式修改后: x = " << x << ", y = " << y << endl;
    
//     return 0;
// }