#include <bits/stdc++.h>
using namespace std;
int min(int a,int b){
	return a<b?a:b;
}
int main(){
	int t;
	cin>>t;
	int n,m,k;
	int mi,ma;
	while(t--){
		cin>>n>>m>>k;
		mi=min(m,n);
		ma=m+n-mi;
		if(mi+k-ma >= 0) cout<<"0\n";
		else cout<<ma-mi-k<<endl;
	}
}