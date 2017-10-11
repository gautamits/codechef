#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long n;
	long k;
	long temp;
	while(t--){
		cin>>n;
		k=0;
		for(long i=0;i<n;i++){
			cin>>temp;
			k^=temp;
		}

		cout<<k<<endl;
	}
}