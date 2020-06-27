#include <iostream>
#include "myarray.h"
#include <string>
#include "person.h"
using namespace std;

void printIntArray(MyArray<int> & arr);

void printPersonArry(MyArray<Person> & arry);

//template <class T>
//extern ostream & operator<<(ostream &os, const MyArray<T> &arr);

int main()
{
    cout << "Hello World!" << endl;
    MyArray<int> arr(10);
    for (int i = 0; i < arr.getCapacity(); ++i) {
        arr.add_num(i);
    }
    printIntArray(arr);

//    cout << arr <<endl;
    Person p1("hewei",123);
    Person p2("hewei",123);
    Person p3("hewei",123);
    Person p4("hewei",123);

    MyArray<Person> pArray(4);
    pArray.add_num(p1);
    pArray.add_num(p2);
    pArray.add_num(p3);
    pArray.add_num(p4);
    printPersonArry(pArray);
    return 0;
}

void printIntArray(MyArray<int> & arr)
{
    for (int i = 0; i < arr.getSize(); ++i) {
        cout << arr[i] << endl;
    }
}
void printPersonArry(MyArray<Person> & arry)
{
    for (int i = 0; i < arry.getSize(); i++) {
        cout << "ÐÕÃû£º"<<arry[i].m_Name<<" ÄêÁä£º"<<arry[i].m_Age << endl;
    }
}
