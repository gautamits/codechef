#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char a[100];
		scanf("%s",a);
		int total=0;
		for(int i=0;i<strlen(a);i++){
			total+=(a[i]-'0');
		}
		cout<<total<<endl;
	}
}