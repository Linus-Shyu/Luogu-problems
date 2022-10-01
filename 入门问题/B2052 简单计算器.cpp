#include <iostream>

using namespace std;

int main()
{
	int a,b;
	char c;
	cin>>a>>b>>c;
	if(b==0&&c=='/'){
		cout<<"Divided by zero!"<<endl;
		return 0;
	}
	if(c=='+'){
		cout<<a+b<<endl;
		return 0;
	}
	if(c=='-'){
		cout<<a-b<<endl;
		return 0;
	}
	if(c=='*'){
		cout<<a*b<<endl;
		return 0;
	}
	if(c=='/'){
		cout<<a/b<<endl;
		return 0;
	}
	else{
		cout<<"Invalid operator!"<<endl;
		return 0;
	}
	return 0;
}