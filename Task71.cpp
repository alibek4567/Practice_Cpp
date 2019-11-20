#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int hour,minutes;
    cin>>hour>>minutes;
    double x;
    if (hour > 12) {hour-= 12; }
    x = abs(360 / 12 * hour+0.5*minutes - 360 / 60 * minutes);
    if (x > 180) { x = 360 - x; }
    cout<<x;
    return 0;
}
