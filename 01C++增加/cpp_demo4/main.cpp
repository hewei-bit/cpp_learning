#include <iostream>

using namespace std;


//    指针引用
void swap_string(char*& str1,char*& str2)
{
    char* temp_str = str1;
    str1 = str2;
    str2 = temp_str;
}

int main()
{
    cout << "Hello World!" << endl;
    //    练习：定义两个字符串
    //    char* p = "Hello";
    //    char* pp = "World";
    //    设计一个函数实现对两个字符串的交换(pp--- Hello ,p --- World)
        char *p = "Hello";
        char *pp = "World";
        cout << "p = "<< p <<" pp = "<< pp << endl;
        swap_string(p,pp);
        cout << "p = "<< p <<" pp = "<< pp << endl;
    return 0;
}
