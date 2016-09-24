#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x,y,z;
	cout<<"x="; cin>>x;
	cout<<"y="; cin>>y;
	cout<<"z="; cin>>z;
	double a,b;
	a=(2*cos(x-(M_PI/6)))/(1/2+pow(sin(y),2));
	b=1+((z*z)/(3+(z*z/5)));
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
}