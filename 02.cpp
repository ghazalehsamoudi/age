#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int num;
	string strGrade;
	cout<<"enter a number";
	cin>>num;
	if(num>=0 && num<50)
	    cout<<"the Grade is E";
	else if(num>=50 && num<60)
	    cout<<"the Grade is D";
	else if(num>=60 && num<70)
	    cout<<"the Grade is C";
	else if(num>=70 && num<80)
	    cout<<"the Grade is B";
	else if(num>=80 && num<90)
	    cout<<"the Grade is A";
	else if(num>=90 && num<=100)
	    cout<<"the Grade is A+";
	else
	    cout<<"unknown";
}
