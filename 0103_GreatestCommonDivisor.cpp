#include<iostream>
using namespace std;
int cnt = 0;
int gcd(int m,int n){
	printf("gcd(%d,%d), cnt = %d\n",m,n,++cnt);
	if(m%n==0)
		return n;
	return gcd(n,m%n);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(max(a,b),min(a,b))<<endl;
}
// Greatest Common Divisor : 
//
// LCM (Largest Common Multiplication) = (a*b)/gcd(a,b)