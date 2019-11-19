#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a+b>a+c&&a+b>b+c){
	cout<<a<<" "<<b;
}
if(c+b>a+c&&c+b>b+a){
	cout<<c<<" "<<b;
}
if(a+c>a+b&&a+c>b+c){
	cout<<a<<" "<<c;
}}
