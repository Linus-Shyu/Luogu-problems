#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int x,a,y,b;
    double ans;
    cin>>x>>y>>a>>b;
    ans = (x * a - y * b) / (a - b);
    printf("%.2lf",ans);
    return 0;
}