#include <iostream>

//#include<string.h> //旧的风格
#include <cstring> //c++用c语言的头文件的风格

// std 标准 使用标准的命名空间 std中的所有成员名可以直接使用
using namespace std;

#if 0
int a = 10; //全局变量
void test01(){
    int a = 20;
    cout<< "局部变量a= "<< a <<endl; //优先选择局部变量
    cout<< "全局变量a= "<< ::a <<endl; //取全局变量
}

namespace A{
    int a = 100;
}

namespace B{
    int a = 200;
}
void test02(){
    cout<<"A a= " << A::a <<endl;
    cout<<"B a= " << B::a <<endl;

}


namespace A{
    int b=100;
    void func(){
        cout<< "func a="<< b<< endl;
    }
}
#endif

namespace veryLongName{
    int c=100;
    void func(){cout<<"hello namespace"<<endl;}
}
void test07(){
    using namespace veryLongName;
    //出现的变量 先从veryLongName命名空间中找，找不到，其他地方中找。
    cout<<"c="<<c<<endl;
}
// 有且仅有一个主函数，可以有多个其他函数
int main() {
    std::cout << "Hello, World!" << std::endl;
    cout<< "aaa 是的" <<endl;//将字符串输出到 控制台

    // cin代表输入设备
//    int num = 0;
//    cin >> num; //将键盘输入的数据赋值给 num
//    cout<< "num:" << num << endl;

    // ::作用域运算符
//    test01();

    //命名空间
//    test02();

//    A::func();
    test07();
    return 0;
}

