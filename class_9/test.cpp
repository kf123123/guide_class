class Foo // Foo 不再是聚合 (有私有成员)
{    int m_x {};
    int m_y {};
};
int main(){    

    Foo foo { 6, 7 }; // 编译失败: 不能使用聚合初始化
    return 0;
    }