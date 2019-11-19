#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
b=a*b/100;
for(int i=0;i<5;i++){
	a+=b;
}
cout<<a;
}
