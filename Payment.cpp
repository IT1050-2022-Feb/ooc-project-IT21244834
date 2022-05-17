#include "Payment.h"
#include <iostream>
#include<cstring>
using namespace std;

Payment::Payment()
{
	int ID = 0;
	strcpy(Name, "");
	strcpy(email, "");

}

Payment::Payment(int pid, const char pname[], const char pemail[])
{
	pid = ID;
	strcpy(Name, pname);
	strcpy(email, pemail);
}

void Payment::setpaymentdetails(int ppid, const char ppname[], const char ppemail[])
{
	ID = ppid;
	strcpy(Name, ppname);
	strcpy(email, ppemail);

}
void Payment::addpaymentdetails()
{

}

void Payment::validatepaymentdetails()
{

}
