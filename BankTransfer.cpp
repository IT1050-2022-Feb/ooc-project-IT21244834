#include "BankTransfer.h"
#include <iostream>
#include<cstring>
using namespace std;

BankTransfer::BankTransfer()
{

	int AccountNo = 0;
	strcpy(BankName, "");
	strcpy(Branch, "");
}
BankTransfer::BankTransfer(int B_acNo, const char B_BankName[], const char B_branch[])
{

	B_acNo = AccountNo;

	strcpy(BankName, B_BankName);
	strcpy(Branch, B_branch);
}
void BankTransfer::setBankTransferDetails(int BT_acNo, const char BT_BankName[], const char BT_branch[])
{

	AccountNo = BT_acNo;

	strcpy(BankName, BT_BankName);
	strcpy(Branch, BT_branch);
}
void BankTransfer::displayBankTransferDetails()
{
	cout << "Payment ID = " << ID << endl;
	cout << "Payeer name = " << Name << endl;
	cout << "Payeer email = " << email << endl;
	cout << "Account No = " << AccountNo << endl;
	cout << "Bank Name = " << BankName << endl;
	cout << "Branch = " << Branch << endl;
}