#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	char a[100001];
	char b[100001];
	while(t--){
		cin>>a;
		cin>>b;
		for(int i=0;i<strlen(a);i++){
			if(a[i]==b[i]){
				if(a[i]=='W') cout<<'B';
				else cout<<'W';
			}
			else cout<<'B';
		}
		cout<<endl;
	}
	return 0;
}