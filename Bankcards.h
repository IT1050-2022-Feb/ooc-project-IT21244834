#include "Payment.h"
#include <iostream>
#include <cstring>
using namespace std;

class Bankcards : public Payment
{
private:

	int cardno;
	char type[10];
	char exp[5];

public:
	Bankcards();
	Bankcards(int pcardno, const char ptype[], const char pexp[]);

	void setbankcarddetails(int ppcardno, const char pptype[], const char ppexp[]);
	void displaybankdetails();


};
