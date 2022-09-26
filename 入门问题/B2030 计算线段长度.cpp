#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;


long long a,b,c,d;
double ans;
int main()
{
	cin>>a>>b>>c>>d;
	ans=sqrt((a-c)*(a-c)+(b-d)*(b-d));
	printf("%0.3f\n",ans);
	return 0;

}