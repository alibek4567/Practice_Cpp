#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	cin>>a;
	b=a/10000;
	a=a%10000;
	c=a/1000;
	a=a%1000;
	d=a/100;
	a=a%100;
	e=a/10;
	a=a%10;
	c=0;e=0;
	cout<<b<<c<<d<<e<<a;}
