#include <iostream>
using namespace std;
int a;
double c,b;
int main()
{
	cin>>a;
	b=a/1.2;
	c=a/(3.0)+(27.0+23.0);
	if(b==c)
		cout<<"All"<<endl;
	if(b<c)
		cout<<"Walk"<<endl;
	if(c<b)
		cout<<"Bike"<<endl;
	return 0;
}