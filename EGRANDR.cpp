#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long n;
	int twos;
	int fives;
	long sum;
	while(t--){
		cin>>n;
		twos=0;
		fives=0;
		sum=0;
		int temp;
		for(long i=0;i<n;i++){
			cin>>temp;
			if(temp==2) twos++;
			else if(temp==5) fives++;
			sum+=temp;
		}
		if(twos > 0 || fives == 0 || sum/n < 4) cout<<"No\n";
		else cout<<"Yes\n";

	}
	return 0;
}