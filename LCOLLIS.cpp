#include <bits/stdc++.h>
using namespace std;
int comb(int a,int b){
	return (a*(a-1))/2;
}
int main(){
	int t;
	cin>>t;
	int a,b;
	int temp;
	while(t--){
		cin>>a>>b;
		char arr[a][b+1];
		char c;
		for(int i=0;i<a;i++){
				scanf("%s",arr[i]);
		}
		/*for(int i=0;i<a;i++)
			for(int j=0;j<b;j++)
				printf("%c",arr[i][j]);
		*/
		int total=0;
		for(int j=0;j<b;j++){
			temp=0;
			for(int i=0;i<a;i++){
				if ( arr[i][j] == '1' ){
					temp++;
				}

			}
			//cout<<temp<<endl;
			total+=comb(temp,2);
		}
		cout<<total<<endl;
	}
	return 0;
}