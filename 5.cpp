#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,S;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	c=sqrt(pow(a,2)+pow(b,2));
	S=a*b/2;
	cout<<"c="<<c<<endl;
	cout<<"S="<<S<<endl;
	return 0;
}