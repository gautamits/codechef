#include <bits/stdc++.h>
using namespace std;
int min(int a,int b){
	return a<b?a:b;
}
int max(int a,int b){
	return a>b?a:b;
}
int hcf(int a,int b){
	int mi=min(a,b);
	int ma=max(a,b);
	int temp;
	while(ma%mi!=0){
		temp=ma;
		ma=mi;
		mi=temp%mi;
	}
	return mi;

}
int main(){
	int t;
	cin>>t;
	int n;
	int h;
	while(t--){
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin>>arr[i];
		h=arr[0];
		for(int i=1;i<n;i++){
			h=hcf(h,arr[i]);
		}
		//cout<<h<<endl;
		for(int i=0;i<n;i++) cout<<arr[i]/h<<" ";
		cout<<endl;



	}
	//cout<<endl;
	return 0;
}