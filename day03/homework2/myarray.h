#ifndef MYARRAY_H
#define MYARRAY_H
#include <iostream>

using namespace std;
//�Զ���һ�������װ�࣬�����ʵ�����⣬
//�����ʵ����Ҫ���������캯�����������캯��
//�������ݣ���ȡ���ݣ���ӡ����ĳ���
//int����
//ʵ�ʹ��ܣ�
//1)�����鸳ֵ
//2)��ӡ����
//3)ʵ�����²�����
//MyArray array1(10); //������Է�10��Ԫ��
//MyArray array2 = array1; //��array1��ʼ������array2

class MyArray
{
public:
    MyArray();

    explicit MyArray(const int cap = 100,int size = 0);

    MyArray(const MyArray &array);

    ~MyArray();

    //��������
    void insert(int val);
    //��ӡ����ĳ���
    int getSize();
    //��ӡ���������
    int getCapacity();

    //1)�����鸳ֵ
    void SetData(int pos, int val);

    //��ȡ����
    int getData(int pos);
    //2)��ӡ����



private:
    int capacity;//����
    int size;//��С
    int *array_Address;//�����ַ
};









#endif // MYARRAY_H
