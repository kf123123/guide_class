# 结构体
``` c++

struct Student {
    string name;
    int age;
    double score;
};

// 初始化方法对比
Student s1 = {"张三", 20, 85.5};  // 列表初始化
Student s2{"李四", 19, 90.0};    // C++11统一初始化
```

# 枚举
``` c++
enum Color {
    RED,    // 0
    GREEN,  // 1
    BLUE    // 2
};

enum Weekday {
    MONDAY = 1,
    TUESDAY,    // 2
    WEDNESDAY   // 3
};

enum class FilePermission {
    Read = 1,     // 0001
    Write = 2,    // 0010  
    Execute = 4   // 0100
};


```