#include <bits/stdc++.h>
using namespace std;
long min(long a,long b){
	return a<b?a:b;
}
long max(int a,long b){
	return a>b?a:b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long a,b;
		cin>>a>>b;
		long q=min(a,b);
		long p=max(a,b);
		long temp;;
		while(p%q!=0){
			temp=p;
			p=q;
			q=temp%q;
		}
		cout<<q<<" "<<a*b/q<<endl;
	}
	return 0;
}