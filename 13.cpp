#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,H,S,p;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	H=2*S/a;
	cout<<"H="<<H<<endl;
	return 0;
}