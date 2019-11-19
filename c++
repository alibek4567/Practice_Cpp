1
#include <iostream> 
using namespace std;
int main()
{cout<<"Silence is golden";}
2
#include <iostream> 
using namespace std;
int main()
{cout<<"Monday"<<endl;
cout<<"November"<<endl;
cout<<"Alibek";}
3
#include <iostream>
using namespace std;
int main()
{
for(int i=0; i < 5; i++){
        for(int j=0; j <= i; j++)
            cout << "0";
        cout << endl;
    }
    return 0;
}
4
#include <iostream> 
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
for(int i=0;i<a;i++){
	for(int j=0;j<b;j++){
		cout<<"A";
	}
	cout<<endl;
}}
5
#include <iostream>
using namespace std;
int main()
{
cout<<"*     *     *"<<endl;
cout<<" *   * *   *"<<endl;
cout<<"  * *   * *"<<endl;
cout<<"   *     *";
}
6
#include <iostream>
using namespace std;
int main()
{
int result;
result=1+2-4;
cout<<result;
}
7
#include <iostream>
using namespace std;
int main()
double x=0.5,y=0.25;
cout<<x+y;)
8
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
a=(a+4*b)*(a-3*b)+pow(a,2);
cout<<a;
}
9
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a;
cin>>a;
a=abs(a)+pow(a,5);
cout<<a;
}
10
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a;
cin>>a;
a=pow((a+1),2)+3*(a+1);
cout<<a;
}
11
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a;
cin>>a;
a=(abs(a-5)-sin(a))/3+sqrt(pow(a,2)+2014)*cos(2*a)-3;
cout<<a;
}
12
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a;
cin>>a;
a=exp(a-2)+abs(sin(a))-pow(a,4)*cos(1/a);
cout<<a;
}
13
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a,b,x;
cin>>a>>b>>x;
a=pow(pow(x,2)+b,1/5)-(pow(b,2)*pow(sin(x+a),3))/x;
cout<<a;
}
14
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,sum,product;
cin>>a>>b;
sum=a+b;
product=a*b;
cout<<sum<<" "<<product;
}
15
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,square,cube;
cin>>a;
square=pow(a,2);
cube=pow(a,3);
cout<<square<<" "<<cube;
}
16
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c,sum;
cin>>a>>b>>c;
a=a*2;b=b-3;c=pow(c,2);
sum=a+b+c;
cout<<sum;
}
17
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c,average,differense;
cin>>a>>b>>c;
average=(a+b+c)/3;
differense=2*(a+c)-3*b;
cout<<average<<" "<<differense;
}
18
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,peremetr,area;
cin>>a;
peremetr=4*a;
area=pow(a,2);
cout<<peremetr<<" "<<area;

}
19
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,sum1,sum2;
cin>>a>>b;
sum1=a*300/1000+b*400/1000;
sum2=3*(2*b+a*1800/1000);
cout<<sum1<<" "<<sum2;
}
20
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a,b,velocity;
cin>>a>>b;
a=a*60;
b=b*1000;
velocity=b/a;
cout<<velocity;
}
21
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a,b,c,area,perimeter;
cin>>a>>b;
c=sqrt(pow(a,2)+pow(b,2));
area=a*b/2;
perimeter=a+b+c;
cout<<area<<" "<<perimeter<<" "<<c;
}
22
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a,convert;
cin>>a;
convert=a*1.8+32;
cout<<convert;
}
23
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double x,a,y,k,operation1,operation2;
a=x*1000;
operation1=(y*x)*a/x;
operation2=k*x/a;
cout<<operation1<<" "<<operation2;
}
24
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double a,b,c,result;
cin>>a>>b>>c;
for(int i=0;i<a;i++){
	c+=3;
}
result=c*b/100;
cout<<result;
}
25
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int w,m,y,days;
cin>>w>>m>>y;
days=w*7+m*30+y*365;
cout<<days;
}
26
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<a<<" "<<b;
}
27
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c,x,y,z;
cin>>a>>b>>c;
x=a+b+c;
y=a+b;
z=c-y;
a=y;b=z;c=x;
cout<<a<<" "<<b<<" "<<c;
}
28
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
b=a*b/100;
for(int i=0;i<5;i++){
	a+=b;
}
cout<<a;
}
28
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
for(int i=0;i<5;i++){
	a=a+a*b/100;
}
cout<<a;
}
29
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
a=a+b;
b=a-b;
a=a-b;
cout<<a<<" "<<b;
}
30 a)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a;
cin>>a;
a=a*a;
a=a*a;
cout<<a;
30 b)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b;
cin>>a;
a=a*a;
b=a*a;
a=a*b;
cout<<a;
}
30 c)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c,d,e;
cin>>a;
b=a*a;c=b*a;d=c*c;e=d*d;a=c*e;
cout<<a;
}
31
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c,area1,area2,squares;
cin>>a>>b>>c;
area1=a*b;
area2=c*c;
squares=area1/area2;
cout<<squares;
}
32
#include <iostream>
#include <cmath>
using namespace std;
int main()
{int a,a1,x,y,z;
a1=237;
z=a1/100;
x=a1/10%10;
y=a1%10;
a=x*100+y*10+z;
cout<<a;
}
33
#include <iostream>
#include <cmath>
using namespace std;
int main(){
double x,y,result;
cin>>x>>y;
if(x<0||y<0){
	cout<<"Doesn't exist";
}
else{
result=sqrt(x-sqrt(y));
cout<<result;
}
}
34
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int x;
cin>>x;
if(x>3){
	x+=10;
}
else{
	x-=10;
}
cout<<x;
}
35
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int x;
cin>>x;
if(x<7){
	cout<<"Yes";
}
if(x>10){
	cout<<"No";
}
if(x==9){
	cout<<"Error";
}
}
36
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int x;
cin>>x;
if(x>12){
	cout<<"Error";
}if(x==1){
	cout<<"January";
}if(x==2){
	cout<<"February";
}if(x==3){
	cout<<"Marth";
}if(x==4){
	cout<<"April";
}if(x==5){
	cout<<"May";
}if(x==6){
	cout<<"June";
}if(x==7){
	cout<<"Jule";
}if(x==8){
	cout<<"August";
}if(x==9){
	cout<<"September";
}if(x==10){
	cout<<"October";
}if(x==11){
	cout<<"November";
}if(x==12){
	cout<<"December";
}}
37
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int x,y,max;
cin>>x>>y;
if(x>y){
	max=x;
}
else{
max=y;}
cout<<max;
}
38
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(x-y==100||y-x==100){
	cout<<"Yes";
}
else{cout<<"No";
}
}
39
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(a>b){
	cout<<"Yes";
}
else{a=a+b;
b=a-b;
a=a-b;
cout<<a<<" "<<b;
}
}
40
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a;
cin>>a;
if(a>-10&&a<10){
	a=a+5;
}
else{a=a-10;
}
cout<<a;
}
41
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a;
cin>>a;
if(a>100||a<-100){
	a=0;
}
else{a+=1;
}
cout<<a;
}
42
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a;
cin>>a;
if(a>=2&&a<=5){
	a+=10;
}
if(a>7&&a<40){
	a=a-100;
}
if(a<0||a>3000){
	a=a*3;
}
else{a=0;
}
cout<<a;
}
43
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a;
cin>>a;
if(a==3||a==5||a==4){
	cout<<"Spring";
}
if(a==6||a==8||a==7){
	cout<<"Summer";
}
if(a==9||a==11||a==10){
	cout<<"Autumn";
}
if(a==1||a==2||a==12){
cout<<"Winter";
}
if(a>=13){
	cout<<"Error";
}
}
44
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
if(a!=10&&0!=10&&a%2==0){
	cout<<a+b;
}
else{cout<<a*b;
}

}
45
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a>10&&b>10&&c>10&&a%3==0&&b%3==0){
	cout<<"Yes";
}
else{cout<<"No";
}}
46
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a%5==0&&b%5!=0&&c%5!=0){
	cout<<a;
}
if(a%5!=0&&b%5!=0&&c%5==0){
	cout<<c;
	}
if(a%5!=0&&b%5==0&&c%5!=0){
	cout<<b;
}
if(a%5==0&&b%5==0&&c%5==0){
	cout<<a+b+c;
}
if(a%5==0&&b%5==0&&c%5!=0){
	cout<<a+b;
}
if(a%5==0&&c%5==0&&b%5!=0){
	cout<<a+c;
}
if(b%5==0&&c%5==0&&a%5!=0){
	cout<<b+c;
}
if(a%5!=0&&b%5!=0&&c%5!=0){
	cout<<"error";
}
}
47
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a>b&&a>c){
	cout<<a;
}
if(b>a&&b>c){
	cout<<b;
}
if(c>b&&c>a){
	cout<<c;
}}
48
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a+b>a+c&&a+b>b+c){
	cout<<a<<" "<<b;
}
if(c+b>a+c&&c+b>b+a){
	cout<<c<<" "<<b;
}
if(a+c>a+b&&a+c>b+c){
	cout<<a<<" "<<c;
}}
49
#include <iostream> 
using namespace std;
int main()
{
int a[4],max=0;
for(int i=0;i<4;i++){
cin>>a[i];
if(max<a[i]&&a[i]%2==0)max=a[i];
}
if(!max)cout<<"Not found";
else cout<<max;
}
50
#include <iostream> 
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
if((a==b)||(a==c)||(b==c)){
	cout<<"yes";
}
}



