#include "CustomerCareOfficer.h"
#include <iostream>
#include <cstring>
using namespace std;

CustomerCareOfficer::CustomerCareOfficer()
{
	int ID = 0;
	strcpy(Name,"");
	strcpy(address, "");
	strcpy(email, "");

}

CustomerCareOfficer::CustomerCareOfficer(int cid, const char cname[], const char caddress[], const char cemail[])
{
	cid = ID;
	strcpy(Name, cname);
	strcpy(address, caddress);
	strcpy(email, cemail);
}

void CustomerCareOfficer::setCCOdetails(int ccoid, const char cconame[], const char ccoaddress[], const char ccoemail[])
{
	ID = ccoid;
	strcpy(Name, cconame);
	strcpy(address, ccoaddress);
	strcpy(email, ccoemail);

}

void CustomerCareOfficer::getcustomerdetails()
{

}


void CustomerCareOfficer::displaydetails()
{
	cout << "Customer Care Officer ID = " << ID << endl;
	cout << "Customer Care Officer name = " << Name << endl;
	cout << "Customer Care Officer address = " << address << endl;
	cout << "Customer Care Officer email = " << email << endl;
}