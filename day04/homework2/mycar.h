#ifndef MYCAR_H
#define MYCAR_H

#include <iostream>

using namespace std;



//ʵ��һ�������ࣨ������ɫ��Ʒ�ƣ���������ʣ��������
//��������ʱ����ʾ����״̬���ܵĹ�������ʣ��������
//�����Լ���
class mycar
{
public:
    mycar(){}
    mycar(string color,string brand,double kilometer,double RemainL,double Fuel_consumption);
    mycar(const mycar &other);
    ~mycar();

    void runnig(int kilometer);

    void fuelUp(int gasoline);

    void showInfo();

    double getRemainL() const;


private:
    const string color;
    const string brand;
    double kilometer;
    double RemainL;
    double Fuel_consumption;
};



#endif // MYCAR_H
