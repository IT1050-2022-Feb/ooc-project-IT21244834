#include "Payment.h"
#include <iostream>
#include <cstring>
using namespace std;

class BankTransfer : public Payment
{
private:

	int AccountNo;
	char BankName[20];
	char Branch[10];

public:
	BankTransfer();
	BankTransfer(int B_acNo, const char B_BankName[], const char B_branch[]);

	void setBankTransferDetails(int BT_acNo, const char BT_BankName[], const   char BT_branch[]);
	void displayBankTransferDetails();
};
