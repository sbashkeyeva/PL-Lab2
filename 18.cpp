#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x,y,z,a,b;
    cout<<"Enter the numbers"<<endl;
    cin>>x>>y>>z;
    a=(1+y)*(x+y/(pow(x,2)+4))/(exp(-x-2)+1/(pow(x,2)+4));
    b=(1+cos(y-2))/(pow(x,4)/2+pow(sin(z),2));
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}