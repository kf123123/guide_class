#include<iostream>

int main() {
    int value=66;
    int temp;
    std::cout << "请输入你的猜测值: " << std::endl;
    std::cin >> temp;
    // 将比较结果转换为具体的case值
    // 大于:1, 等于:0, 小于:-1
    int result = (temp > value) ? 1 : 
                (temp == value) ? 0 : -1;
    
    switch(result) {
        case 1:
            std::cout << "太大了" << std::endl;
            break;
        case 0:
            std::cout << "猜对了" << std::endl;
            break;
        case -1:
            std::cout << "太小了" << std::endl;
            break;
    }
    return 0;
}
