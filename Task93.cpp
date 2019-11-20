#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int x,sum=0;
	cin>>x;
	for(int i=1;i<x+1;i++){
		sum+=pow(i,2);
	}
	cout<<sum;
}
