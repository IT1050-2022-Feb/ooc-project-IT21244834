#include "Services.h"
#include <iostream>
#include<cstring>
using namespace std;

Services::Services()
{
	int No = 0;
	strcpy(Name, "");
	
}

Services::Services(int sno, const char sname[])
{
	sno = No;
	strcpy(Name, sname);
}

void Services::setServices(int ssno, const char ssname[])
{
	No = ssno;
	strcpy(Name, ssname);

}

void Services::updateservicesdetails()
{

}


void Services::displayServices()
{
	cout << "Service Number = " << No << endl;
	cout << "Service = " << Name << endl;
}