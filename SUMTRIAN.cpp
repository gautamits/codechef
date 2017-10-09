#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		long long int arr[a][a]={0};

	for(int i=0;i<a;i++)
		for(int j=0;j<=i;j++)
			cin>>arr[i][j];
	for(int i=a-2;i>=0;i--)
		for(int j=i;j>=0;j--)
			if(arr[i+1][j+1] > arr[i+1][j]) arr[i][j]+=arr[i+1][j+1];
			else arr[i][j]+=arr[i+1][j];
	cout<<arr[0][0]<<endl;
}
return 0;
}