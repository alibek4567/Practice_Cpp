#include <iostream>
using namespace std;
int main () {
    double speed=10000;
    cout<<speed<<endl;
    for(int i=1; i<10; i++) {
        speed+=speed/10.0;
        cout<<i+1<<speed<<endl;
    }
    return 0;
}
