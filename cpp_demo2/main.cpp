#include <iostream>

using namespace std;

void exchange_1(int* num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return ;
}

void exchange_2(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return ;
}

int main(void)
{
//    int i =100,j,k;
//    cout << "Hello World!" << endl;
//    cout << i << endl;
//    cout << "请输入 i>>>j>>k"<< endl;
//    cin >> i >> j >> k;
//    cout << "i = " <<i << "j = "<<j<<"k="<<k <<endl;

    int num1,num2;//变量


    cout << "请输入两个数（1 2）" << endl;
    cin >> num1 >> num2;

    exchange_1(&num1,&num2);

    cout << "num1 = "<<num1 << endl <<"num2 = "<< num2<< endl;

    swap(num1,num2);

    cout << "num1 = "<<num1 << endl <<"num2 = "<< num2<< endl;




    return 0;
}
