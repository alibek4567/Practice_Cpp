#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a;
cin>>a;
a=exp(a-2)+abs(sin(a))-pow(a,4)*cos(1/a);
cout<<a;
}
