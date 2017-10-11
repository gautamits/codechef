#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	unsigned int k;
	unsigned int n,mi;
	while(t--){
		cin>>n;
		cin>>mi;
		for(unsigned int i=1;i<n;i++){
			cin>>k;
			if(k<mi) mi=k;
		}
		cout<<mi*(n-1)<<endl;
	}
	return 0;
}