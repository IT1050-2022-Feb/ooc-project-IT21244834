#include "feedback.h"
#include<cstring>
#include<iostream>
using namespace std;

Feedback::Feedback()
{
  int Id=0;
	strcpy (Name, "");
	strcpy  (Email,"");
}

	Feedback :: Feedback(int FId, const char FName[],const char FEmail[])
{
  FId = Id;
  strcpy (Name, FName);
  strcpy (Email, FEmail);
  
}

	void Feedback::setFeedbackDetails(int FbId, const char FbName[], const char FbEmail[])
{
  Id = FbId;
  strcpy (Name, FbName);
  strcpy (Email, FbEmail);
  
}

 void Feedback:: ObtainFeedback()
{
  
}

	void Feedback::DispalyFeedback()
{
  cout << "Feedback ID :" << Id << endl;
	cout << "Feedback name:" << Name << endl;
	cout << "Feedback email :" << Email << endl;
}
