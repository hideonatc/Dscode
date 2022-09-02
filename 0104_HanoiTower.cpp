#include<iostream>
#include<vector>
using namespace std;
vector <int> p[3];
int cnt = 0;
void show(void){
	int l = max(p[0].size(),max(p[1].size(),p[2].size()));
	for(int i=0;i<3;i++){
		for(vector<int>::iterator it = p[i].begin();it!=p[i].end();it++)
			cout<<" "<<*it;
		cout<<endl;
	}
	cout<<"-------------------"<<endl;
	return;
}
void hanoi(int n,char f,char t,char o){
	printf("hanoi(%d,%c,%c,%c)\n",n,f,t,o);
	if(n==1){
		int m = p[int(f-'a')].back();
		p[int(f-'a')].pop_back();
		p[int(t-'a')].push_back(m);
		printf("step %d\n",++cnt);
		show();
	}
	else{
		hanoi(n-1,f,o,t);
		hanoi(1,f,t,o);
		hanoi(n-1,o,t,f);
	}
	return;
}
int main(){
	int n;
	cin>>n;
	for(int i=n;i>=1;i--)
		p[0].push_back(i);
	hanoi(n,'a','b','c');
}
// Hanoi Tower : 
//
// move n disks from A to C = move n-1 disks from A to B + move nth disk from A to C + move n-1 disks from B to C
// T(n) = 2T(n-1) + 1