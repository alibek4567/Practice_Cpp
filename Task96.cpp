#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n,x;
cin>>n;
double s=0;
for (int i = 0;i<n+1;i++)
{
    s = s+1/cos(pow(x,i));
}
cout<<s;}
