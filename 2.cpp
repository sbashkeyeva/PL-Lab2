#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double R,r,H,V,S,L;
	cout<<"Enter the numbers"<<endl;
	cin>>R>>r>>H;
	L=sqrt(pow(H,2)+pow((R-r),2));
	S=M_PI*L*(R+r)+M_PI*(pow(R,2)+pow(r,2));
	V=M_PI*H/3*(pow(R,2)+pow(r,2)+R*r);
	cout<<"S="<<S<<endl;
	cout<<"V="<<V<<endl;
	return 0;
}