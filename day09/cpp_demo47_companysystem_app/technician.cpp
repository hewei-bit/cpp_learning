#include "technician.h"


Technician::Technician()
{

}

Technician::~Technician()
{

}

void Technician::calcSalary()
{
    m_salary = m_MoneyHour*m_WorkHour*22;
}

void Technician::showInfo()
{
        cout << "Ա������: "<< m_Name << endl;
        cout << "Ա������"<< m_level << endl;
        cout << "Ա������: "<< m_workNumber << endl;
        cout << "Ա��нˮ: " << m_salary << endl;
}

void Technician::init()
{
      cout << "�����뼼����Ա����:";
      cin>>m_Name;
      cout << "�����뼼����Ա����ʱ��:";
      cin>>m_WorkHour;
      m_level = 1;
      m_workNumber = m_startNumber++;
}

void Technician::promote()
{
    m_level += 3;
}
