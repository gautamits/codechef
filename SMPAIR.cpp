#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int m1=INT_MAX;
		int m2=INT_MAX;
		int temp;
		for(int i=0;i<n;i++){
			cin>>temp;
			if(temp<=m1) {
				m2=m1;
				m1=temp;
			}
			else if(m2>temp) m2=temp;
		}
		cout<<m1+m2<<endl;
	}
}