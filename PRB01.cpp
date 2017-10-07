#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		bool f=1;;
		for(int i=2;i<=sqrt(n);i++){
			if(n%i==0){
				f=0;
				cout<<"no\n";
				break;
			}
		}
		if(f==1) cout<<"yes\n";
	}
}