#include <iostream>
using namespace std;

class Feedback
{
private:
	int Id;
	char Name[50];
	char Email[30];

public:
	Feedback();
	Feedback(int FId, const char FName[],const char FEmail[]);
	void setFeedbackDetails(int FbId, const char FbName[], const char FbEmali[]);
      void ObtainFeedback();
	void DispalyFeedback();  
};