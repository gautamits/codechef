#include <bits/stdc++.h>
using namespace std;
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int t,k;
		cin>>t>>k;
		int a,b;
		int total=0;
		while(t--){
			cin>>a>>b;
			if(k>0){
				k=k-a;
				if(k<0)
					total=total+(-1)*k*b;
				continue;
			}
			
			total=total+a*b;
		}
		cout<<total<<endl;
	}
}