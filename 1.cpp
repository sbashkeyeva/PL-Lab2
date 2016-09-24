#include <iostream>
#include <cmath>
using namespace std;
int main()
{


	double a,b,c,p,H,S,V;
	cout<<"Enter the numbers"<<endl;
	cin>>a>>b>>c>>H;
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	V=S*H/3;
	cout<<"V="<<V<<" "<<"Well done!"<<endl;
	


	return 0;
}