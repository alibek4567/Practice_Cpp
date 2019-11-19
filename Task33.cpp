#include <iostream>
#include <cmath>
using namespace std;
int main(){
double x,y,result;
cin>>x>>y;
if(x<0||y<0){
	cout<<"Doesn't exist";
}
else{
result=sqrt(x-sqrt(y));
cout<<result;
}
}
