#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	char arr[1001];
	int arr2[1001];
	cin>>t;
	while(t--){
		bool result=1;
		scanf("%s",arr);
		
		int n=strlen(arr);
		for(int i=0;i<n;i++) arr2[i]=arr[i]-'a';
		
		if(n%2==0){
			sort(arr2,arr2+n/2);
			sort(arr2+n/2,arr2+n);
			/*for(int i=0;i<n/2;i++) cout<<arr2[i]<<endl;
			cout<<endl;
			for(int i=n/2;i<n;i++) cout<<arr2[i]<<endl;*/
			for(int i=0,j=n/2;i<n/2,j<n;i++,j++){
				if(arr2[i]!=arr2[j]){
					result=0;
					break;
				}
			}
		}
		else{
			sort(arr2,arr2+n/2);
			sort(arr2+n/2+1,arr2+n);
			/*for(int i=0;i<n/2;i++) cout<<arr2[i]<<endl;
			cout<<endl;
			for(int i=n/2+1;i<n;i++) cout<<arr2[i]<<endl;
			*/
			for(int i=0,j=n/2+1;i<n/2,j<n;i++,j++){
				if(arr2[i]!=arr2[j]){
					result=0;
					break;
				}
			}
		}
		if(result==1) cout<<"YES\n";
		else cout<<"NO\n";
		//for(int i=0;i<n/2;i++) cout<<arr2[i]<<" "<<arr2[n/2+i];
	}
	return 0;
}

