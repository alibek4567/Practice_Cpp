#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a,b,c,area,perimeter;
cin>>a>>b;
c=sqrt(pow(a,2)+pow(b,2));
area=a*b/2;
perimeter=a+b+c;
cout<<area<<" "<<perimeter<<" "<<c;
}
