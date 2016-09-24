#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,c,h,angle,area;
	cout<<"a="; cin>>a;
	cout<<"b="; cin>>b;
	cout<<"angle="; cin>>angle;
	c=(a-b)/2;
	h=c*tan(angle);
	area=(a+b)*h/2;
    cout<<"S="<<area<<endl;
	return 0;
}