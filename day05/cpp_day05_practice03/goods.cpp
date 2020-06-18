#include "goods.h"

int Goods::total_weight = 0;

void buy(Goods* &head,int w)
{
    GOODS new_goods = new Goods(w);
    if(head == nullptr)
    {
        head->next = new_goods;
    }
    else
    {
        new_goods->next = head->next;
        head->next = new_goods;
    }
}

void sale(Goods* &head)
{
    //�൱�ڴ�������ɾ��һ�����ɾ������
    if(head == nullptr)
    {
        cout << "�ֿ�û�л���" <<endl ;
        return ;
    }
    GOODS temp = head;
    head = head->next;

    delete temp;
    cout <<"sale"<<endl;

}


Goods::Goods()
{
    this->weight = 0;
    this->next = nullptr;
}

Goods::Goods(int weight)
{
    this->weight = weight;
    this->next = nullptr;
    total_weight += this->weight;

}

int Goods::getTotalWeight()
{
    return total_weight;
}

Goods::~Goods()
{

    total_weight -= this->weight;
    cout <<"�����ɹ�" <<endl;
}


