#include <iostream>

int main()
{
    int arr[5]; // 定义有5个元素的数组

    arr[1] = 7; // 使用[] 访问索引为 1 的元素
    std::cout << arr[1]; // 打印 7
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        std::cout<<"请输入第"<<i<<"个元素的值：";
        std::cin>>arr[i];
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        std::cout << "Element at index " << i << " is " << arr[i] << std::endl;
    }
    // std::cout << "输出地址" << std::endl;
    //     for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    // {
    //     std::cout << "Element at index address " << i << " is " << &arr[i] << std::endl;
    // }

    // std::cout << "指针访问" << std::endl;
    //  for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    // {
    //     std::cout << "Element at index " << i << " is " << *(arr + i) << std::endl;
    // }
    

    return 0;
}