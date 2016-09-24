#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double R0,R1,R2,R3;
	cout<<"Enter the numbers"<<endl;
	cin>>R1>>R2>>R3;
	R0=R1*R2*R3/(R2*R3+R1*R3+R1*R2);
	cout<<"R0="<<R0<<endl;
	return 0;
}