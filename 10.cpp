#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,p,r;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>c;
	b=sqrt(pow(c,2)-pow(a,2));
	p=(a+b+c)/2;
	r=sqrt((p-a)*(p-b)*(p-c)/p);
	cout<<"b="<<b<<endl;
	cout<<"r="<<r<<endl;
		return 0;
}