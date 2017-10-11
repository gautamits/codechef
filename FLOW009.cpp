#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int q,p;
	while(t--){
		cin>>q>>p;
		if(q<=1000) printf("%.6f\n",(float)p*q);
		else printf("%.6f\n",(float)p*q-p*q*.1);
	}
}