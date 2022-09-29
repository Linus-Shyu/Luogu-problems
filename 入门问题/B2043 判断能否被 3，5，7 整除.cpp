#include <iostream>
using namespace std;
int main()
{
	long long a;
	cin>>a;
	if(a%3==0&&a%5==0&&a%7==0){
		cout<<3<<" "<<5<<" "<<7<<endl;
		return 0;
	}
	if(a%3==0&&a%5==0){
		cout<<3<<" "<<5<<endl;
		return 0;
	}
	if(a%5==0&&a%7==0){
		cout<<5<<" "<<7<<endl;
		return 0;
	}
	if(a%3==0&&a%7==0){
		cout<<3<<" "<<7<<endl;
		return 0;
	}
	return 0;
}