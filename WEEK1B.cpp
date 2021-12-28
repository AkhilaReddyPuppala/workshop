#include<iostream>
using namespace std;

int main()
{
	int days,w,d;
	cout<<"Enter no. of days : ";
	cin>>days;
	w=days/7;
	days=days%7;
	d=days%7;
	cout<<"weeks : "<<w<<"\nDays : "<<d;

	
	return 0;
}
