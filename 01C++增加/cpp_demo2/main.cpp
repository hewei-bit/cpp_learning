#include <iostream>

using namespace std;
void swap(int* a,int* b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void swap_r(int& a,int& b) //��������Ϊ�����β�ʱ����Ҫ��ʼ����������������ʼ��
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp; //���úܺõı�����ָ�����������
}
int main()
{
    //[1] cin cout endlʹ��

#if 0
    int i,j;
    char c;
    //����cin--- ��׼�����൱�ڼ��� cout----��׼������൱����Ļ���߿���̨
    //<< ---- �÷��ű�ʾ������ض���  >> ---- �÷��ű�ʾ�������ض���

    cout << "hello World!" << endl;
    cout << i <<endl; //��i��ֵ���������̨
    cout << "������i>>j>>c"<<endl;
    cin >> i >> j >> c; //��������ʱ�����԰��س�һ��һ�����������������ʱ���ÿո���зֿ�����
                        //�����벻ͬ���͵ı���ֵʱ��Ҫ��˳���������
    cout << "i = "<<i << "j = " << j << "c = " << c;
#endif
    //[2] bool����ʹ��
#if 0
    //��c++�У�bool����ֻ��true(1)��flase(0)
    bool flag = false;

        cout << "flag = " << flag << endl; //0

        flag = true;
         cout << "flag = "<< flag << endl; //1

         flag = -3;

         cout << "flag = "<< flag << endl; //1

         int a = flag;

         cout << "a = " << a << endl; //1
        #endif

      //[3] ��Ŀ�����
#if 0
         int a =1,b=3;

             (a>b?a:b)= 5; //ok ���ص���a��b�����������Ǳ�����ֵ�����Կ�������ֵ
            //(a>b?20:b)= 5; //error ��Ŀ��������ܷ��س���

             cout << "a = " << a << "b = "<<b <<endl;
#endif
     //[4] ���õĻ�������
             int r = 10;  //����һ������,����һ���ڴ��ȡ������r�����Ұ�10��ֵ���ڴ�ռ���

             cout << "r = " << r << endl;
             r = 20; //����ֱ��ͨ��r���޸���ռ�ڴ��ֵ
              cout << "r = " << r << endl;
             int* p_r = &r; //�����Ÿ�������һ��˵���ñ���Ϊָ�����
             //�����Ÿ�������һ�𣬱�ʾ��д�ڴ�
                // �������ڸ�ֵ����(=)��� --- д�ڴ�
                //�������ڸ�ֵ����(=)�ұ� --- ���ڴ�
             *p_r = 30; //ͨ��ָ�����޸���ռ�ڴ��ֵ
             cout << "r = " << r << endl;
             //��C++�У����ڼ�Ӹ�ֵ�������˸��õĽ������---����
             int& rr = r; //����������ʱ�������ʼ������Ϊ����һ����ϵ�������������ñ�����ռ�ռ�

             cout << "&r" << &r << endl; //&r0x61feac
             cout << "&rr" << &rr << endl; //&rr0x61feac

             rr = 100;
              cout << "r = " << r << endl;

              int a = 3;
              int b = 5;
              //���һ������������a b��ֵ
              cout << "����ǰ" << a << b <<endl;
              //swap(&a,&b);
              swap_r(a,b);
              cout << "������" << a << b <<endl;

              int& b_r = b; //˵�����ñ�����bָ��ͬһ���ڴ�ռ䣬 b_r�Ǳ���b�ı���

              int& b_rr = b; //һ�����������ж�����ñ���
              cout <<"b = " << b << "b_r = " << b_r << "b_rr = " << b_rr << endl; //3 3 3

              b_rr = 100;
              cout <<"b = " << b << "b_r = " << b_r << "b_rr = " << b_rr << endl;
              int& b_rrr = b_r;
              cout << "b_rrr = " << b_rrr << endl;
              return 0;
}
