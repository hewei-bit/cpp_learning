#include <iostream>
#include "kitty.h"
using namespace std;

int main()
{
    //[1]������Ķ���
   kitty cat,cat1;
   //[2] ͨ���������������Ա�����ͺ���
   cat.setSex('W');
   cat.setWeight(0.5);
   cat.setFurcolor(gold);
   cat.showInfo();
   cat1.showInfo();


   cat.eat();
   cat.eat();
   cat.eat();

   cat.showInfo();
    return 0;
}
