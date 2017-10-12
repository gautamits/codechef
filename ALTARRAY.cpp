#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long int n;
	long long int temp;
	long long int prev;
	while(t--){
		cin>>n;
		int arr[n];
		int brr[n];
		brr[n-1]=1;
		for(int i=0;i<n;i++) cin>>arr[i];
		for(int i=n-2;i>=0;i--){   
			if((arr[i]<0 && arr[i+1] > 0) || (arr[i] > 0 && arr[i+1]<0)){
				brr[i]=brr[i+1]+1;
			}
			else
				brr[i]=1;
		}
		for(int i=0;i<n;i++) cout<<brr[i]<<" ";
		cout<<endl;
	}
	return 0;
}