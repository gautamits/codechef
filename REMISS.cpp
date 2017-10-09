#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int m=a>b?a:b;
		int r=a+b;
		cout<<m<<" "<<r<<endl;
	}
}