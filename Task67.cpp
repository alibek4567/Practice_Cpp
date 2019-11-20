 #include <iostream>
 using namespace std;
 int main(){
 int a,b,c,d,x;
 cin>>a;
     b = a % 10;
     c = (a / 10) % 10;
     d = (a / 100) % 10;
     a = (a / 1000) % 10;
 
        int *min = &b;
        int *max = &b;
 
        if (c < *min)
            min = &c;
        else if (c > *max)
            max = &c;
 
        if (d < *min)
            min = &d;
        else if (d > *max)
            max = &d;
 
        if (a < *min)
            min = &a;
        else if (a > *max)
            max = &a;
        x = *min;
        *min = *max;
        *max = x;
      cout<<b+c*10+d*100+a*1000;} 
        
	
