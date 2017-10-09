#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n,k;
	int r;
	while(t--){
		cin>>n>>k;
		r=0;
		for(int i=1;i<=k;i++){
			if (n%i > r) r=n%i;
		}
		cout<<r<<endl;
	}
	return 0;
}