#include <iostream>
using namespace std;

class CustomerCareOfficer
{
private:
	int ID;
	char Name[25];
	char address[50];
	char email[30];

public:
	CustomerCareOfficer();
	CustomerCareOfficer(int cid,const char cname[], const char caddress[], const char cemail[]);

	void setCCOdetails(int ccoid, const char cconame[], const char ccoaddress[], const char ccoemail[]);
	void getcustomerdetails();
	void displaydetails();
	

};