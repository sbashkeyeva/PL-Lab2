#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,S,p;
	cout<<"Enter the numbers"<<endl;
	cin>>a;
	p=(a+a+a)/2;
	S=sqrt(p*(p-a)*(p-a)*(p-a));
	cout<<"S="<<S<<endl;
	return 0;
}