#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long n,k;
	cin>>n>>k;
	long a;
	while(n--){
		cin>>a;
		if(a%k==0) t++;
	}
	cout<<t<<endl;
}