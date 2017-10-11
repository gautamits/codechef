#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n,k,e;
	long int m;
	while(t--){
		cin>>n>>k>>e>>m;

		long int arr[n-1];
		long int temp;
		long int total;
		for(int i=0;i<n-1;i++){
			arr[i]=0;
			for(int j=0;j<e;j++){
				cin>>temp;
				arr[i]+=temp;
			}
		}
		sort(arr,arr+(n-1),greater<long int>());
		total=0;
		for(long int i=0;i<e-1;i++){
			cin>>temp;
			total+=temp;
		}
		//for(int i=0;i<n-1;i++) cout<<arr[i]<<" ";
		//cout<<endl;
		//cout<<arr[k-1]<<" must be beaten as he is at "<<total<<endl;
		if (arr[k-1]-total < 0)
			cout<<"0"<<endl;
		else if(arr[k-1]-total+1 > m) 
			cout<<"Impossible\n";
		else 
			cout<<arr[k-1]-total+1<<endl;


	}
	return 0;
}