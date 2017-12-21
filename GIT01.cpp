#include <iostream>
#include <cstdlib>
using namespace std;
int cherry(int** arr,int r,int c,int f){
	//cout<<f<<endl;
	int ans[r][c];
	int sum=0;
	int temp;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			temp=(i+j)%2==0?f:!f;
			if(arr[i][j]!=temp){
				if(arr[i][j]==0)
					sum+=5;
				else
					sum+=3;
			}
		}
	}
	return sum;
}
int min(int a,int b){
	return a<b?a:b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int r,c;
		cin>>r>>c;
		int **arr=(int**)malloc(r*sizeof(int*));

		for(int i=0;i<r;i++){
			arr[i]=(int*)malloc(c*sizeof(int));
		}
		char temp;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>temp;
				arr[i][j]=temp=='R'?0:1;
			}
		}
		cout<<min(cherry(arr,r,c,0),cherry(arr,r,c,1))<<endl;
	}
	return 0;
}