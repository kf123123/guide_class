# while
``` c++
#include<iostream>

int main() {
    int value=66;
    int temp;
    std::cout << "请输入你的猜测值: " << std::endl;
    std::cin >> temp;
    while(temp != value) {
        if(temp > value) {
            std::cout << "太大了，请重新输入: " << std::endl;
        } else {
            std::cout << "太小了，请重新输入: " << std::endl;
        }
        std::cin >> temp;
    }

    std::cout << "恭喜你，猜对了!" << std::endl;
    return 0;
}
```

# for
``` c++
#include<iostream>
using namespace std;

int main() {
    int value = 66;
    int temp;
    
    cout << "猜数字游戏开始！" << endl;
    
    for(int temp = 0; temp != value; ) {
        cout << "请输入你的猜测值: ";
        cin >> temp;
        
        if(temp > value) {
            cout << "太大了";
        } else if(temp < value) {
            cout << "太小了";
        }
        
        // 如果不是正确答案，提示重新输入
        if(temp != value) {
            cout << "，请重新输入" << endl;
        }
    }
    
    cout << endl << "恭喜你，猜对了!" << endl;
    return 0;
}
```