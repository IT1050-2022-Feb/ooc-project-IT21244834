#include <iostream>
#include "CustomerCareOfficer.h" 
#include "Payment.h" 
#include "Services.h" 
#include "Report.h" 
#include "feedback.h" 
#include "Admin.h" 
#include "Bankcards.h"
#include "BankTransfer.h"
#include "RegCustomer.h" 
#include "UnregisteredCustomer.h" 
using namespace std;

int main()
{

	CustomerCareOfficer officer01,officer02;
	Services s1, s2;
	Report R1, R2;
	Feedback Feedback1, Feedback2;
	Admin Admin1, Admin2;
	BankTransfer bt1,bt2;
	Bankcards bc1,bc2;
	RegCustomer cu1, cu2;
	UnregisteredCustomer UC1, UC2, UC3;


	Admin1.setAdminDetails(003, "Eleena Ferro", "13EleenaFerro", "EleenaFerro", "EleenaFerro@gmail.com", "Human Resources");
	Admin2.setAdminDetails(004, "Olied Jereldeen", "14OliedJereldeen", "OliedJereldeen", "OliedJereldeen@gmail.com", "Human Resources");
	

	officer01.setCCOdetails(001, "John Perera", "66,flower road,colombo", "jperera@gmail.com");
	officer02.setCCOdetails(002, "Merlin Darknight", "104/4,main street,colombo", "darknightmerlin@gmail.com");

	s1.setServices(1, "Design a Advertisment");
	s2.setServices(2, "Promote Advertisments");

	R1.setReportdetails(101, "Monthly Report", "Accounts", "30/04/2022");
	R2.setReportdetails(202, "Employee Report", "HR", "01/04/2022");

	Feedback1.setFeedbackDetails(003, "Ben Tennison", "BenTennison@gmail.com");
	Feedback2.setFeedbackDetails(004, "Guwen Timothy", "Guwentimothy@gmail.com");

	bt1.setBankTransferDetails(21279878970, "commercial Bank", "Negombo");
	bt2.setBankTransferDetails(21279878970, "commercial Bank", "Negombo");

	bc1.setbankcarddetails(4286321748523697, "master", "02/26");
	bc2.setbankcarddetails(4286548945215347, "master", "02/26");

	cu1.SetCusDetails(001, "Pasinu Perera", "50A,Digana Road,Malabe", "1975-01-
		21",0712222222,"pasinuperera@gmail.com");
    cu2.SetCusDetails(0002, "Kamal 
		Ekanayake","71 / B, Someawatha, Nugegoda","2000 - 11 -
		22",070768976,"kamal678@gmail.com");

	UC1.setUnregCusDetails(1111, "Norville Rogers", "06,smanala road,polonnaruwa.", "norville@gmail.com", "2000/07/22");
	UC2.setUnregCusDetails(1112, "Fred Jones", "05,Flower Road,Negombo.", "fred22@gmail.com", "2000/07/20");
	UC3.setUnregCusDetails(1113, "Velma Dinkley", "04,Beroot Place,colombo.", "velma00@gmail.com", "2001/05/18");

	officer01.displaydetails();
	cout<<"" << endl;
	officer02.displaydetails();
	cout << "" << endl;


	s1.displayServices();
	cout << "" << endl;
	s2.displayServices();
	cout << "" << endl;

	R1.displayReportdetails();
	cout << "" << endl;
	R2.displayReportdetails();
	cout << "" << endl;

	Feedback1.DispalyFeedback();
	cout << "" << endl;
	Feedback2.DispalyFeedback();
	cout << "" << endl;

	Admin1.DispalyAdminDetails();
	cout << "" << endl;
	Admin2.DispalyAdminDetails();
	cout << "" << endl;

	bc1.displaybankdetails();
	cout << "" << endl;
	bc2.displaybankdetails();
	cout << "" << endl;


	bt1.displayBankTransferDetails();
	cout << "" << endl;
	bt2.displayBankTransferDetails();
	cout << "" << endl;

	cu1.display();
	cout << "" << endl;
	cu2.display();
	cout << "" << endl;

	UC1.displayUnregCusDetails();
	UC2.displayUnregCusDetails();
	UC3.displayUnregCusDetails();


	return 0;
}