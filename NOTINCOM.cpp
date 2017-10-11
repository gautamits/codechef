#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int a,b;
	while(t--){
		cin>>a>>b;
		long int arr[a];
		long int brr[b];
		for(int i=0;i<a;i++) cin>>arr[i];
		for(int i=0;i<b;i++) cin>>brr[i];
		sort(arr,arr+a);
		sort(brr,brr+b);
		int c=0;
		int i=0;
		int j=0;
		while(i < a && j < b){
			if(arr[i] == brr[j]){
				c++;
				i++;
				j++;
			}
			else if(arr[i] < brr[j]) i++;
			else j++;
		}
		cout<<c<<endl;
	}
	return 0;
}