#include<iostream>
using namespace std;
int cnt = 0;
int ack(int m,int n){
	printf("ack(%d,%d), cnt = %d\n",m,n,++cnt);
	if(m==0)
		return n+1;
	if(n==0)
		return ack(m-1,1);
	return ack(m-1,ack(m,n-1));
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<ack(a,b)<<endl;
}
// Ackermann's Function