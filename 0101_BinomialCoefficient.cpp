#include<iostream>
using namespace std;
int cnt = 0;
int bin(int m,int n){
	printf("bin(%d,%d), cnt = %d\n",m,n,++cnt);
	if(m==0||n==0)
		return 1;
	return bin(m,n-1)+bin(m-1,n-1);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<bin(a,b)<<endl;
}
// Binomial Coefficient : 
//
// bin(m,n) = n!/(m!(n-m)!) = (n-1)!/((m-1)!(n-m)!) + (n-1)!/(m!(n-m-1)!) = bin(m,n-1) + bin(m-1,n-1)