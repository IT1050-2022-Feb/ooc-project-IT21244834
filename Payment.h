#include <iostream>
using namespace std;

class Payment
{
protected:
	int ID;
	char Name[25];
	char email[30];

public:
	Payment();
	Payment(int pid, const char pname[], const char pemail[]);

	void setpaymentdetails(int ppid, const char ppname[], const char ppemail[]);
	void addpaymentdetails();
	void validatepaymentdetails();


};
