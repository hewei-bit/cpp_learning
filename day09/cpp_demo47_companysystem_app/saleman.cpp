#include "saleman.h"


SaleMan::SaleMan()
{

}

SaleMan::~SaleMan()
{

}

void SaleMan::calcSalary()
{
    m_salary = m_MonthAmout * m_rate;
}

void SaleMan::showInfo()
{
    cout << "Ա������: "<< m_Name << endl;
    cout << "Ա������"<< m_level << endl;
    cout << "Ա������: "<< m_workNumber << endl;
    cout << "Ա��нˮ: " << m_salary << endl;
}

void SaleMan::init()
{
    cout << "����������Ա��������:";
    cin >> m_Name;
    cout << "�����뵱�µ����۶�:";
    cin >> m_MonthAmout;
    m_level = 1;
    m_workNumber = m_startNumber++;
    m_rate = 0.04;

}

void SaleMan::promote()
{
   m_level += 1;
}
