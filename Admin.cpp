#include "Admin.h"
#include<iostream>
#include<cstring>
using namespace std;

Admin::Admin()
{
	 int AdminId = 0;
	strcpy (AdminName,"") ;
	strcpy (AdminUserName,"");
	strcpy (AdminPassword,"");
	strcpy (AdminEmail,"");
	strcpy (AdminDepartment,"");

}

Admin::Admin(int AdId, const char AdName[], const char AdUserName[], const char AdPassword[], const char AdEmail[], const char AdDepartment[])
{
	 AdId =AdminId ;
	strcpy(AdminName, AdName);
	strcpy(AdminUserName, AdUserName);
	strcpy(AdminPassword, AdPassword);
	strcpy(AdminEmail, AdEmail);
	strcpy(AdminDepartment, AdDepartment);

}

void Admin::setAdminDetails (int Id, const char Name[], const char UserName[], const char Password[], const char Emali[], const char Department[])
{
	AdminId = Id ;
	strcpy(AdminName, Name);
	strcpy(AdminUserName, UserName);
	strcpy(AdminPassword, Password);
	strcpy(AdminEmail, Emali);
	strcpy(AdminDepartment, Department);

}


void Admin::DispalyAdminDetails()
{
	cout << "Admin ID :" << AdminId << endl;
	cout << "Admin name:" << AdminName << endl;
	cout << "Admin user name :" << AdminUserName << endl;
	cout << "Admin password :" << AdminPassword << endl;
	cout << "Admin email :" << AdminEmail << endl;
	cout << "Admin department :" << AdminDepartment << endl;

}

void CreateReport()
{
  
}