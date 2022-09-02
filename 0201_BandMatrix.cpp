#include<iostream>
using namespace std;
int main(){
	int A[4][4] = {{1,2,0,0},{3,4,5,0},{6,7,8,9},{0,10,11,12}};
	int B[16];
	int i,j,idx = 0;
	for(i=3;i>=0;i--){
		j = 0;
		if(A[i][j]==0)
			continue;
		int x = i,y = j;
		while(x<4&&y<4)
			B[idx++] = A[x++][y++];
	}
	for(j=1;j<4;j++){
		i = 0;
		if(A[i][j]==0)
			continue;
		int x = i,y = j;
		while(x<4&&y<4)
			B[idx++] = A[x++][y++];
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++)
			cout<<A[i][j]<<" ";
		cout<<endl;
	}
	for(int i=0;i<idx;i++)
		cout<<B[i]<<" ";
	cout<<endl;
}
// Band Matrix : 
//
// use one-dimensional array to store band matrix to reduce space waste
// space for array : eg. two 0s to the upper right, one 0s to the lower left --> ((4-2)+(4-1)+4) + ((4-1)+(4-2)+(4-3)+4) - 4 = 12