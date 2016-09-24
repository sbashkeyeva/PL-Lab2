#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double R,S;
	int r=20;
	cout<<"Enter the numbers"<<endl;
	cin>>R;
	S=M_PI*(pow(R,2)-pow(r,2));
	cout<<"S="<<S<<endl;
	return 0;
}