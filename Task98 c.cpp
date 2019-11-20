#include <iostream>
using namespace std;
int main () {
    double n,speed=10000,sum=10000;
    cin>>n;
    for(int i=1; i<n; i++) {
        speed+=speed/10.0;
        sum+=speed;
    }
    cout<<sum<<endl;
    return 0;
}
