#include<iostream>
#include<conio.h>
using namespace std;
main()
{   
    int n=1,number=0, sum=0;
	while(n<=7)
	{
		cout<<"please enter a number";
	   cin>>number;   
	   sum+=number;
	   n+=1;
	}
	cout<<sum<<endl;
	cout<<"ave="<<(float)sum/7;
	
}
