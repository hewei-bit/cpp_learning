#include <iostream>
#include "goods.h"
using namespace std;

//����һ����Ʒ����Ʒ�������۳�ʱ����Ϊ��λ��
//����������һ��

int main()
{
    cout << "Hello World!" << endl;
    Goods apple;
    GOODS head = &apple;
    int num =0 ;
    while(1)
    {
//        system("cls");
        cout << "1.�ӻ�" <<endl;
        cout << "2.����" <<endl;
        cout << "3.�˳�" <<endl;
        cin >> num;
        switch (num)
        {
            case 1:
                buy(head,50);
                cout <<"total_weight" <<head->getTotalWeight()<<endl;
                break;
            case 2:
                sale(head);
                cout <<"total_weight" <<head->getTotalWeight()<<endl;
                break;
            case 3:
                return 0;
            default:
                cout << "�����������������"<<endl;
                break;
        }
    }



}



