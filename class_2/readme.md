# 自增自减代码
``` c++
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
```

# 运算符代码

``` c++
#include<iostream>

int main() {
    int a=5;
    int b = 10;
    int c;
    int d, e, f, g;
    c= a + b;
    //c+=b; //等价于 c = c + b;
    e=a - b;
    f=a * b;
    g=a / b;
    std::cout << "c的值是: " << c << std::endl;
    std::cout << "d的值是: " << d << std::endl;
    std::cout << "e的值是: " << e << std::endl;
    std::cout << "f的值是: " << f << std::endl;
    std::cout << "g的值是: " << g << std::endl;
    return 0;
}
```