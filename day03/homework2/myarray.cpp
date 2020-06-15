#include "myarray.h"



MyArray::MyArray()//无参构造函数
{
    cout << "无参构造函数被调用"<<endl;
    capacity = 100;
    size = 0;
    cout << "size = "<<size<<endl;
   // array_Address = new int[capacity];
}

MyArray::MyArray(const int cap, int size):capacity(cap)//有参构造函数
{
    cout << "有参构造函数被调用"<<endl;
    capacity = cap;
    size = 0;
    cout << "size = "<<size<<endl;
    array_Address = new int[capacity];
    //        array_Address = (int *)malloc(sizeof(int)* cap);
    //        if (array_Address == nullptr)
    //        {
    //            cout<<"malloc fail"<<endl;
    //        }
}

MyArray::MyArray(const MyArray &array)//拷贝构造函数
{
    cout << "拷贝构造函数被调用"<<endl;
    capacity = array.capacity;
    size = array.size;
    cout << "size = "<<size<<endl;
    array_Address = new int[capacity];
    //        array_Address = (int *)malloc(sizeof(int)* array.capacity);
    //        if(array_Address == nullptr)
    //        {
    //            cout<< "malloc fail"<<endl;
    //        }

    *array_Address = *(array.array_Address);
    for(int i = 0;i < size;i++)
    {
        array_Address[i] = array.array_Address[i];
    }
}

MyArray::~MyArray()//析构函数
{
    cout << "析构函数被调用"<<endl;
    if(array_Address != nullptr)
    {
        delete[] array_Address;
    }
    //        if(array_Address != NULL)
    //        {
    //            free(array_Address);
    //            array_Address = nullptr;
    //        }
}

void MyArray::insert(int val)
{
//    if(size >= capacity)
//    {
//        return ;
//    }
    array_Address[size] = val;
    cout << size <<" ";
    size++;
}

int MyArray::getSize()
{
    return size;
}

int MyArray::getCapacity()
{
    return capacity;
}

void MyArray::SetData(int pos, int val)
{
    if (pos < 0 || pos > capacity - 1)
    {
        return;
    }
    array_Address[pos] = val;
}

int MyArray::getData(int pos)
{
//    cout <<array_Address[pos]<<endl;
    return array_Address[pos];
}
