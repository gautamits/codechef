#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int a,b,n;
	long long int p,q;
	while(t--){
		cin>>a>>b>>n;
		if(n%2!=0) a=a*2;
		p=a>b?a:b;
		q=a<b?a:b;
		cout<<p/q<<endl;
	}
}