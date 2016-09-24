#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"a="; cin>>a;
	cout<<"b="; cin>>b;
	cout<<"c="; cin>>c;
	double ma,mb,mc;
	
	ma=(sqrt(2*(pow(b,2)+pow(c,2)-pow(a,2))))*1/2;
	mb=(sqrt(2*(pow(a,2)+pow(c,2)-pow(b,2))))*1/2;
	mc=(sqrt(2*(pow(b,2)+pow(a,2)-pow(c,2))))*1/2;
	cout<<"ma="<<ma<<endl;
	cout<<"mb="<<mb<<endl;
	cout<<"mc="<<mc<<endl;
	return 0;
}