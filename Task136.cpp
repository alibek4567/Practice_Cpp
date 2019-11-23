#include <bits/stdc++.h>
#include <ctime>
using namespace std;
int main() {
    int n;
    cin>>n;
    int speed=1,temp;
    int a;
    while (n>0){
        if ((n==1 || n==2 || n==3) && (speed==0)){
            speed=1;
            break;
        }
        if (speed==1){
            cin>>temp;
            n-=temp;
            speed=0;
        } else {
            srand(time(NULL));
            a = rand()%(3)+1;
            cout<<a<<endl;
            n-=a;
            speed=1;
        }
    }
    if (speed==0)
        cout<<"Player win";
    else
        cout<<"Computer win";
    return 0;
}
