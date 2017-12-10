#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int total=0;
		int temp;
		for(int i=0;i<n;i++){
			cin>>temp;
			if(temp%2==0) total+=1;
		}
		if(k==0 && total==n) cout<<"NO\n";
		else if(total>=k) cout<<"YES\n";
		else cout<<"NO\n";
	}
}