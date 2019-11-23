#include <bits/stdc++.h>
using namespace std;
int w(int a){
    int x,sum;
    int y = 0;
    int z = a;
    while (z>0){
        x = z % 10;
        y = y + 1;
        z = z / 10; 
    }
    sum = 0;
    while (a>0){
    x = a % 10;
    sum = sum + round(pow(x, y));
    a = a / 10;
    }
    return sum;
}

int main() {
    for (int i=1;i<=10000;i++){
        if (i==w(i))
            cout<<i<<endl;
    }
}
