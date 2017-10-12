#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int a,b;
	while(t--){
		cin>>a>>b;
		if(abs(a-b) > 2) 
			cout<<"NO\n";
		else if(abs(a-b) == 2) 
			cout<<"YES\n";
		else{
			long long int m=a<b?a:b;
			if(m%2==1) 
				cout<<"YES\n"; 
			else 
				cout<<"NO\n";
		}
	}
	return 0;
}