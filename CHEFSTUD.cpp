#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int total;
	char arr[100001];
	while(t--){
		total=0;
		scanf("%s",arr);
		for(int i=0;i<strlen(arr);i++){
			if(arr[i]=='<' && arr[i+1]=='>') total++;
		}
		cout<<total<<endl;
	

	}
	return 0;
}