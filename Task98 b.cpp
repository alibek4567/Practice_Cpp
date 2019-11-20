#include <iostream>
using namespace std;
int main () {
    double speed=10000,sum=10000;
    for(int i=1; i<7; i++) {
        speed+=speed/10.0;
        sum+=speed;
     }
    cout<<sum<<endl;
    return 0;
}
