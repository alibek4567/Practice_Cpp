#include <iostream>
using namespace std; 
int main()
{
double sum = 0.0;
for(int i = 2; i <= 10; ++i)
sum += ((double)i)/(double(i+1));
cout <<sum<<endl;
 
  return 0;
}
