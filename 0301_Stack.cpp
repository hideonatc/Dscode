#include<iostream>
using namespace std;
struct stk{
	int arr[100];
	int top;
};
bool isFull(stk* s){
	if(s->top==99)
		return 1;
	return 0;
}
bool isEmpty(stk* s){
	if(s->top==-1)
		return 1;
	return 0;
}
void push(stk* s,int n){
	if(!isFull(s)){
		s->arr[++s->top] = n;
		return;
	}
	printf("stack is full\n");
	return;
}
int pop(stk* s){
	if(!isEmpty(s)){
		int r = s->arr[s->top--];
		return r;
	}
	printf("stack is empty\n");
	return -1;
}
void print(stk* s){
	cout<<"{";
	if(!isEmpty(s))
		cout<<s->arr[0];
	for(int i=1;i<=s->top;i++)
		cout<<","<<s->arr[i];
	cout<<"}"<<endl;
	return;
}
int main(){
	stk* s;
	s->top = -1;
	int cmd,n;
	printf("0:Quit 1:isFull 2:isEmpty 3:Push 4:Pop\n");
	while(cin>>cmd){
		if(cmd==0) break;
		switch(cmd){
			case 1:
				cout<<isFull(s)<<endl;
				break;
			case 2:
				cout<<isEmpty(s)<<endl;
				break;
			case 3:
				cin>>n;
				push(s,n);
				break;
			case 4:
				n = pop(s);
				cout<<"pop "<<n<<endl;
				break;
		}
		print(s);
		printf("0:Quit 1:isFull 2:isEmpty 3:Push 4:Pop\n");
	}
}
// Stack
//
// the code somehow has a bug, after a push(with other ?) operation, input 0 to break will cause core dumped