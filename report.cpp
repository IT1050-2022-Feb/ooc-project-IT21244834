#include "Report.h"
#include <iostream>
#include<cstring>
using namespace std;

Report::Report()
{
	int ID = 0;
	strcpy(title, "");
	strcpy(department, "");
	strcpy(date, "");

}

Report::Report(int rid, const char rtitle[], const char rdepartment[], const char rdate[])
{
	rid = ID;
	strcpy(title, rtitle);
	strcpy(department, rdepartment);
	strcpy(date, rdate);

}

void Report::setReportdetails(int rrid, const char rrtitle[], const char rrdepartment[], const char rrdate[])
{
	ID = rrid;
	strcpy(title, rrtitle);
	strcpy(department, rrdepartment);
	strcpy(date, rrdate);

}
void Report::generatereport()
{

}


void Report::displayReportdetails()
{
	cout << "Report ID = " << ID << endl;
	cout << "Report Title = " << title << endl;
	cout << "Department = " << department << endl;
	cout << "Date = " << date << endl;

}