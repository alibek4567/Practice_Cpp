#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c,x,y,z;
cin>>a>>b>>c;
x=a+b+c;
y=a+b;
z=c-y;
a=y;b=z;c=x;
cout<<a<<" "<<b<<" "<<c;
}
