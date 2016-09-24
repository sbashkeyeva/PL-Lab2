#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x1,x2,y1,y2,AB;
	cout<<"Enter the numbers"<<endl;
	cin>>x1>>x2>>y1>>y2;
	AB=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	cout<<"|AB|="<<AB<<endl;
	return 0;
}