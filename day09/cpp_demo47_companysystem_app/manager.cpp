#include "manager.h"


Manager::Manager()
{

}

Manager::~Manager()
{

}

void Manager::calcSalary()
{
  m_salary = m_fixedSalary;
}

void Manager::showInfo()
{
    cout << "Ա������: "<< m_Name << endl;
    cout << "Ա������"<< m_level << endl;
    cout << "Ա������: "<< m_workNumber << endl;
    cout << "Ա��нˮ: " << m_salary << endl;
}

void Manager::init()
{
    cout << "�����뾭�������:";
    cin >> m_Name;
    m_level = 1;
    m_workNumber = m_startNumber++;
    m_fixedSalary = 8000;
}

void Manager::promote()
{
   m_level +=4;
}
