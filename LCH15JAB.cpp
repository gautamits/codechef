#include <bits/stdc++.h>
using namespace std;
int main(){
	int te;
	cin>>te;

	char s[50];
	int t;
	int m;
	while(te--){
		int arr[26]={0};
		cin>>s;
		if(strlen(s)%2==1){
			cout<<"NO\n";
			continue;
		}
		for(int i=0;i<strlen(s);i++) arr[s[i]-'a']=arr[s[i]-'a']+1;
		m=0;
		for(int i=0;i<26;i++) 
			if(m < arr[i]) 
				m=arr[i];
		//cout<<m<<" "<<strlen(s)<<endl;
		if(m==strlen(s)/2) cout<<"YES\n";
		else cout<<"NO\n";
	}
	return 0;
}