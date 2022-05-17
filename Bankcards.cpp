#include "Bankcards.h"
#include <iostream>
#include <cstring>
using namespace std;

Bankcards::Bankcards()
{

	int cardno = 0;

	strcpy(type, "");
	strcpy(exp, "");

}
Bankcards::Bankcards(int pcardno,const char ptype[], const char pexp[])
{

	pcardno = cardno;

	strcpy(type, ptype);
	strcpy(exp, pexp);
}
void Bankcards::setbankcarddetails(int ppcardno, const char pptype[], const char ppexp[])
{

	cardno = ppcardno;

	strcpy(type, pptype);
	strcpy(exp, ppexp);

}
void Bankcards::displaybankdetails()
{
	cout << "Payment ID = " << ID << endl;
	cout << "Payeer name = " << Name << endl;
	cout << "payeer email = " << email << endl;
	cout << "Card number = " << cardno << endl;
	cout << "Card type = " << type << endl;
	cout << "Card expire date = " << exp << endl;
}