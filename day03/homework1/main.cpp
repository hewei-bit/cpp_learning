#include <iostream>

using namespace std;

class Test
{
public://��Ա����
    //�޲ι��캯��
    Test(){}
    //�вι��캯��
    Test(int a,int b)
    {
        m_a = a;
        m_b = b;
    }
    //�������캯��
    Test(const Test &t)
    {
        cout <<"�������캯����ִ��"<<endl;
    }
    //��������
    ~Test()
    {
        cout <<"����������ִ��"<<endl;
    }

private://��Ա����
    int m_a;
    int m_b;
};

Test gg()
{
    cout << "gg() begin..." << endl;
    Test temp(100, 200); //�ֲ�����
    cout << "gg() before return temp" << endl;
    return temp;
}

void test1()
{
    cout << "test1 begin ..." << endl;
    Test t1 = gg();
    cout << "test1 end..." << endl;
}

int main()
{
//    Test t1,t2;
       test1();
       gg();

    return 0;
}
