#include <bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],i;
		a[0]=500;
		a[1]=499;
		for(i=2;i<n;i++){
			a[i] = a[i-1]-1;

		}
		for(i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;

	}
	
	return 0;
}