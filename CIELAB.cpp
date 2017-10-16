#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main(){
	int a,b;
	cin>>a>>b;
	int r=a-b;
	if(r%10 < 9) cout<<r+1<<endl;
	else cout<<r-1<<endl;
	return 0;
}