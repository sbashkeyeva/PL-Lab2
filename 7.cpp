#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,b,A,G;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b;
	A=abs((a+b)/2);
	G=abs(sqrt(a*b));
	cout<<"A="<<A<<endl;
	cout<<"G="<<G<<endl;
		return 0;
} 