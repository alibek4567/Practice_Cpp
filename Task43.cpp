#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a;
cin>>a;
if(a==3||a==5||a==4){
	cout<<"Spring";
}
if(a==6||a==8||a==7){
	cout<<"Summer";
}
if(a==9||a==11||a==10){
	cout<<"Autumn";
}
if(a==1||a==2||a==12){
cout<<"Winter";
}
if(a>=13){
	cout<<"Error";
}
}
