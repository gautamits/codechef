#include <bits/stdc++.h>
using namespace std;
int main(){
	long t;
	cin>>t;
	long long c,d,l;
	while(t--){
		cin>>c>>d>>l;
		int cats=c-d*2;
		if(cats<0) cats=0;
		if((c+d)*4 >= l && (d+cats)*4 <= l && l%4==0) cout<<"yes\n";
		else cout<<"no\n";
	}
}