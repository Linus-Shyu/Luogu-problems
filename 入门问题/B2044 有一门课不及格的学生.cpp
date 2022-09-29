#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if((a<60&&b>=60&&c>=60)||(a>=60&&b<60&&c>=60)||(a>=60&&b>=60&&c<60))
		cout<<1<<endl;
	else
		cout<<0<<endl;
	return 0;
}