#include <bits/stdc++.h>
using namespace std;
string s[5];
int main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0;i<4;i++) cin>>s[i];
	set <string> data;
	for(int i=0;i<4;i++){
		string st;
		cin>>st;
		data.insert(st);
	}
	int total=0;
	for(int i=0;i<4;i++){
		if(data.count(s[i])) total++;
	}
	puts(total >= 2?"similar":"dissimilar");
}
return 0;
	
}