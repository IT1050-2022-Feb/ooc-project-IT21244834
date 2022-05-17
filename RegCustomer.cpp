#include "RegCustomer.h"
#include <iostream>

using namespace std;

RegCustomer:: RegCustomer()
{
 int customerID=0;
 char name[30];
 char address[75];
 char dob[15];
 int contactNo=0;
 char email[30];
}

RegCustomer:: RegCustomer (int cuID,char cuName[20],char cuAddress[50],char cuDob[10],int cuContactNo,char cuEmail[20])
{
 cuID=customerID;
 cuName=name;
 cuAddress=addr;
 cuDob=dob;
 cuContactNo=contactNo;
 cuEmail=email;
}

void RegCustomer::SetCusDetails(int CusID,char CusName[20],char CusAddress[50],char CusDob[10],int CusContactNo,char CusEmail[20])
{
  
 CusID=customerID;
 CusName=name;
 CusAddress=addr;
 CusDob=dob;
 CusContactNo=contactNo;
 CusEmail=email;
}

int RegCustomer::GetCusDetails()
{
  return CusDetails ;
}


void RegCustomer::display(){
 cout << "Customer ID is : " << customerID << endl;
 cout << "Customer name is : " << name << endl;
 cout << "Customer address is : " << addr << endl;
 cout << "Customer Date Of Birth is : " << dob << endl;
 cout << "Customer contact No is : " << contactNo << endl;
 cout << "Customer email is : " << email << endl;
  }

void RegCustomer:: logIn()
{
  
}
void RegCustomer:: PasswordValidation()
{
  
}
void RegCustomer:: logOut()
{
  
}
void RegCustomer:: BuyServices ()
{
  
}
void RegCustomer:: GiveFeedback ()
{
  
}
