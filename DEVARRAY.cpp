#include <bits/stdc++.h>
using namespace std;
int main(){
	long n,q;
	cin>>n>>q;
	long long int ma=0;
	long long int mi=1000000001;
	long long int temp;
	for(long i=0;i<n;i++){
		cin>>temp;
		if(temp < mi) mi=temp;
		if(temp > ma) ma=temp;
	}
	//cout<<mi<<" "<<ma<<endl;
	long long int a=ma>mi?ma:mi;
	long long int b=ma<mi?ma:mi;
	for(long long int i=0;i<q;i++){
		cin>>temp;
		if(temp>=b && temp <= a ) cout<<"Yes\n";
		else cout<<"No\n";
	}
}