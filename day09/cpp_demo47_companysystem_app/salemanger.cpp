
#include "salemanger.h"


SaleManager::SaleManager()
{

}

void SaleManager::calcSalary()
{
  m_salary = m_fixedSalary + m_MonthAmout*m_rate;
}

void SaleManager::showInfo()
{
    cout << "Ա������: "<< m_Name << endl;
    cout << "Ա������"<< m_level << endl;
    cout << "Ա������: "<< m_workNumber << endl;
    cout << "Ա��нˮ: " << m_salary << endl;
}

void SaleManager::init()
{

}

void SaleManager::promote()
{
    cout <<"���������۾��������:";
    cin >> m_Name;
    cout << "����뵱�µ����۶�:";
    cin >> m_MonthAmout;
    m_level = 1;
    m_workNumber = m_startNumber++;
    m_fixedSalary = 5000;
    m_rate = 0.05;
}
