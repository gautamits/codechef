#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		int sum=arr[0];
		for(int i=1;i<n;i++) sum=sum^arr[i];
		if(sum==0) cout<<"First\n";
		else{
			if(n%2==0) cout<<"First\n";
			else cout<<"Second\n";
		}
	}
	return 0;
}