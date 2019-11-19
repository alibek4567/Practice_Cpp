#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a,b,c,result;
cin>>a>>b>>c;
for(int i=0;i<a;i++){
	c+=3;
}
result=c*b/100;
cout<<result;
}
