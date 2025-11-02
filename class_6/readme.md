# 获取c数组的大小

``` c++
#include <iostream>

int main()
{
    const int prime[] { 2, 3, 5, 7, 11 }; // 编译器推导数组长度为 5
    
    std::cout << sizeof(prime); // 打印 20 (假设int长度为 4 byte)

    return 0;
}

```
# 函数值传递以及指针传递
``` c++
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


```

# 引用示例

``` c++
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
    
    // 2. 多个引用指向同一个变量
    int& ref2 = original;
    int& ref3 = ref;
    
    ref2 = 300;
    cout << "=== 多个引用示例 ===" << endl;
    cout << "original: " << original << endl;
    cout << "ref: " << ref << endl;
    cout << "ref2: " << ref2 << endl;
    cout << "ref3: " << ref3 << endl;
    
    return 0;
}
```

``` c++
#include <iostream>
using namespace std;

// 1. 引用作为函数参数（可以修改实参）
void incrementByReference(int& num) {
    num += 10;
    cout << "函数内: num = " << num << endl;
}

// 2. 常量引用（避免拷贝，但不能修改）
void printLargeObject(const string& str) {
    cout << "字符串内容: " << str << endl;
    // str = "修改";  // 错误：常量引用不能修改
}

// 3. 返回引用（可以链式调用）
int& getMax(int& a, int& b) {
    return (a > b) ? a : b;
}

int main() {
    // 测试引用参数
    int value = 5;
    cout << "=== 引用参数示例 ===" << endl;
    cout << "调用前 value = " << value << endl;
    incrementByReference(value);
    cout << "调用后 value = " << value << endl;
    
    cout << endl;
    
    // 测试常量引用
    string longText = "这是一个很长的字符串，使用引用避免拷贝";
    cout << "=== 常量引用示例 ===" << endl;
    printLargeObject(longText);
    
    cout << endl;
    
    // 测试返回引用
    int x = 10, y = 20;
    cout << "=== 返回引用示例 ===" << endl;
    cout << "原始值: x = " << x << ", y = " << y << endl;
    
    getMax(x, y) = 100;  // 直接修改较大的那个值
    cout << "修改后: x = " << x << ", y = " << y << endl;
    
    // 链式调用
    getMax(x, y) = getMax(x, y) + 50;
    cout << "链式修改后: x = " << x << ", y = " << y << endl;
    
    return 0;
}
```