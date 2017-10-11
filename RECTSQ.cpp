#include <bits/stdc++.h>
using namespace std;
int min(int a,int b){
	return a<b?a:b;
}
int hcf(int a,int b){
	int mi=min(a,b);
	int ma=a+b-mi;
	int temp;
	while(ma%mi!=0){
		temp=ma;
		ma=mi;
		mi=temp%mi;
	}
	return mi;

}
int main(){
	int t;
	cin>>t;
	int h;
	int a,b;
	while(t--){
		cin>>a;
		cin>>b;
		h=hcf(a,b);
		cout<<(a/h)*(b/h)<<endl;

	}
	
	return 0;
}