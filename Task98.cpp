#include <iostream>
using namespace std;
int main () {
    double beg=10000;
    cout<<beg<<endl;
    for(int i=1; i<10; i++) {
        beg+=beg/10.0;
        cout<<i+1<<beg<<endl;
    }
    return 0;
}
