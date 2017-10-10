#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;

	int n;
	int i;
	while(t--){
		cin>>n;
		i=1;
		while((i*(i+1))/2 <= n){
			i++;
		}
		cout<<i-1<<endl;
	}
	return 0;
}