#include <iostream>
using namespace std;
int sum(int *i){
    int a,b,c,d,e,f,x;
    a =  *i/100000;
    b = (*i/ 10000 ) % 10;
    c = (*i/ 1000) % 10;
    d= (*i/ 100) % 10;
    e= (*i/ 10) % 10;
    f=*i%10;
    x=a+b+c+d+e+f;
    return x;
}
int main () {
    int n,xi,xj;
bool b;
    for (int i=100000; i<=999999; i++){
        int j=i+1;
    xi=sum(&i);
    xj=sum(&j);
    if(xi%13==0 && xj%13==0){
        cout<<"Yes it can "<<i<<" and "<<j<<endl;
    }
}
    return 0;
}
