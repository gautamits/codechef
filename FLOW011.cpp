#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int s;
	int total;
	while(t--){
		cin>>s;
		if(s<1500) cout<<s*2<<endl;
		else cout<<s+500+s*.98<<endl;
	}
	return 0;
}
