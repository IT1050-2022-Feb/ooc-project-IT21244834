#include<iostream>
using namespace std;

class Admin
{
private:
	int AdminId;
	char AdminName[50];
	char AdminUserName[50];
	char AdminPassword[15];
	char AdminEmail[30];
	char AdminDepartment[15];

public:
	Admin();
	Admin(int AdId, const char AdName[], const char AdUserName[], const char AdPassword[], const char AdEmail[], const char AdDepartment[]);
	void setAdminDetails(int Id, const char Name[], const char UserName[], const char Password[], const char Emali[], const char Department[]);
	void DispalyAdminDetails();
      void CreateReport();
};