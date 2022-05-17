#pragma once
#include <iostream>
using namespace std;

class UnregisteredCustomer
{

private:
int Id;
char Name[20];
char Address[50];
char Email[20];
char DOB[10];

public:
UnregisteredCustomer();
UnregisteredCustomer(int UnCid,const char UnCname[],const char UnCaddress[],const char UnCemail[],const char UnCDOB[]);

void setUnregCusDetails(int UCid,const char UCname[],const char UCaddress[],const char UCemail[],const char UCDOB[]);
void registerToTheSystem();
void checkServices();
void displayUnregCusDetails();


};
