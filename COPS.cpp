#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int h[101]={0};
		int m,x,y;
		cin>>m>>x>>y;
		int temp;;
		for(int i=0;i<m;i++){
			cin>>temp;
			int min,max;
			min=temp-x*y;
			max=temp+x*y;
			if(min<0) min=1;
			if(max>=100) max=100;
			for(int i=min;i<=max;i++) h[i]=1;
			

		}
		int total=0;
		for(int i=1;i<=100;i++) total+=h[i];
		cout<<100-total<<endl;
	}
}