#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a,b,x;
cin>>a>>b>>x;
a=pow(pow(x,2)+b,1/5)-(pow(b,2)*pow(sin(x+a),3))/x;
cout<<a;
}
