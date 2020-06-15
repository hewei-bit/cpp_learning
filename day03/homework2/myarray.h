#ifndef MYARRAY_H
#define MYARRAY_H
#include <iostream>

using namespace std;
//自定义一个数组封装类，来解决实际问题，
//该类的实现主要包括：构造函数，拷贝构造函数
//插入数据，获取数据，打印数组的长度
//int类型
//实际功能：
//1)给数组赋值
//2)打印数组
//3)实现以下操作：
//MyArray array1(10); //数组可以放10个元素
//MyArray array2 = array1; //用array1初始化对象array2

class MyArray
{
public:
    MyArray();

    explicit MyArray(const int cap = 100,int size = 0);

    MyArray(const MyArray &array);

    ~MyArray();

    //插入数据
    void insert(int val);
    //打印数组的长度
    int getSize();
    //打印数组的容量
    int getCapacity();

    //1)给数组赋值
    void SetData(int pos, int val);

    //获取数据
    int getData(int pos);
    //2)打印数组



private:
    int capacity;//容量
    int size;//大小
    int *array_Address;//数组地址
};









#endif // MYARRAY_H
