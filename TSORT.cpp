#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int i;
	int a[1000000]={0};
	while(t--){
		cin>>i;
		a[i]=a[i]+1;
	}
	for(int i=0;i<1000000;i++){
		for(int j=0;j<a[i];j++){
			cout<<i<<endl;
		}
	}
	return 0;
}