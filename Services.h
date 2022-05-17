#include <iostream>
using namespace std;

class Services
{
private:
	int No;
	char Name[25];

public:
	Services();
	Services(int pno, const char sname[]);

	void setServices(int ssno, const char ssname[]);
	void updateservicesdetails();
	void displayServices();
};