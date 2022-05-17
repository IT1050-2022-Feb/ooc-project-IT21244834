class Report
{
private:
	int ID;
	char title[25];
	char department[30];
	char date[10];

public:
	Report();
	Report(int rid, const char rtitle[], const char rdepartment[], const char rdate[]);

	void setReportdetails(int rrid, const char rrtitle[], const char rrdepartment[], const char rrdate[]);
	void displayReportdetails();
	void generatereport();

};