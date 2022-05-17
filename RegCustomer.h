#include <iostream>
#pragma once

class RegCustomer{

 private:

 int customerID;
 char name[30];
 char addr[75];
 char dob[15];
 int contactNo;
 char email[30];

 public:

 RegCustomer();

 RegCustomer(int cusID,char cusName[30],char cusAddr[75],char cusDob[15],int cusContactNo,char cusEmail[30]);

 void SetCusDetails(int CusID,char CusName[30],char CusAddress[75],char CusDob[15],int CusContactNo,char CusEmail[30]);

void UpdateCusDetails();
void display();
int GetCusDetails(); 
void logIn();
void PasswordValidation();
void logOut();
void BuyServices ();
void GiveFeedback ();


};
