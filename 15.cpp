#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double a,b,c,l;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b>>c;
	l=(sqrt(b*c*((pow((b+c),2)-pow(a,2)))))/(b+c);
	cout<<"l="<<l<<endl;
	return 0;
}