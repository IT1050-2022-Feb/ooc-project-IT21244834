#include "UnregCus.h"
#include <iostream>
#include <cstring>
using namespace std;

UnregisteredCustomer::UnregisteredCustomer()
{
  int Id = 0;
  strcpy(Name,"");
  strcpy(Address,"");
  strcpy(Email,"");
  strcpy(DOB,"");  
}

UnregisteredCustomer::UnregisteredCustomer(int UnCid,const char UnCname[],const char UnCaddress[],const char UnCemail[],const char UnCDOB[])
{
  UnCid = Id;
  strcpy(Name, UnCname);
  strcpy(Address, UnCaddress);
  strcpy(Email, UnCemail);
  strcpy(DOB, UnCDOB);
}

void UnregisteredCustomer::setUnregCusDetails(int UCid,const char UCname[],const char UCaddress[],const char UCemail[],const char UCDOB[])
{
  Id = UCid;
  strcpy(Name, UCname);
  strcpy(Address, UCaddress);
  strcpy(Email, UCemail);
  strcpy(DOB, UCDOB);
}

void UnregisteredCustomer:: registerToTheSystem()
{
	
}

void UnregisteredCustomer::checkServices()
{
	
}

void UnregisteredCustomer::displayUnregCusDetails()
{
  cout << "Id = " << Id << endl;
  cout << "Name = " << Name << endl;
  cout << "Address = " << Address << endl;
  cout << "Email = " << Email << endl;
  cout << "Date Of Birth = " << DOB << endl; 
}