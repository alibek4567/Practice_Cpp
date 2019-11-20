#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c,p,area;
	cin>>a>>b>>c;
	if(a+b>c&&b+c>a&&c+a>b){
		cout<<"Correct triangle"<<endl;
		p=(a+b+c)/2;
		area=sqrt(p*(p-a)*(p-b)*(p-c));
		cout<<area;
	}
	else{cout<<"Doesn't exist";
	}
}
