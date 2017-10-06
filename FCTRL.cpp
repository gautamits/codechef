#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int i=0;
		while(pow(5,i) <= n) i++;
		//cout<<i<<endl;
		int total=0;
		for(int k=1;k<i;k++){
			total=total+n/pow(5,k);
		}
		cout<<total<<endl;


	}
}