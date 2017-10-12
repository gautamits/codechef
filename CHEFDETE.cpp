#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int m[n+1]={0};
	int temp;
	for(int i=1;i<=n;i++){
		cin>>temp;
		m[temp]=1;
	}
	int t=0;
	for(int i=1;i<=n;i++){
		if(m[i]==0) cout<<i<<" ";
	}
	cout<<endl;




}