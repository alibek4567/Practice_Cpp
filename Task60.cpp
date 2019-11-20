#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a;
	b=a/100;
	a=a%100;
	c=a/10;
	a=a%10;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<b<<c<<a;}
