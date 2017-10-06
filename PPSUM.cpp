#include <bits/stdc++.h>
using namespace std;
int sum(int a){
	return (a*(a+1))/2;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int answer=sum(b);
		for(int i=1;i<a;i++){
			answer=sum(answer);
		}
		cout<<answer<<endl;

	}
}