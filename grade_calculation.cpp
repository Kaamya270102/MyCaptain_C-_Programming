#include<iostream>
using namespace std;

int main()
{
	int marks;
	cout<<"Enter your marks : ";
	cin>>marks;
	if(marks<0 || marks>100)
	{
		cout<<"Invalid marks entered .!\nTry again ..";
	}
	else if(marks<50)
	{
		cout<<"Grade : F\nRemarks : Needs to work hard .!";
	}
	else if(marks>=50 && marks<60)
	{
		cout<<"Grade : D\nRemarks : Needs Improvement .!";
	}
	else if(marks>=60 && marks<70)
	{
		cout<<"Grade : C\nRemarks : Satisfactory .!";
	}
	else if(marks>=70 && marks<80)
	{
		cout<<"Grade : B\nRemarks : Good .!";
	}
	else if(marks>=80 && marks<90)
	{
		cout<<"Grade : A\nRemarks : Excellent .!";
	}
	else
	{
		cout<<"Grade : A+\nRemarks : Marvellous .!";
	}
	return 0;
}
