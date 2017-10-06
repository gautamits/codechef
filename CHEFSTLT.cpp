#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int t;
	cin>>t;
	char a[100];
	char b[100];
	while(t--){
		cin>>a;
		cin>>b;
		//cout<<a<<b<<endl;
		int min=0;
		int max=0;
		for(int i=0;i<strlen(a);i++){
			if(a[i]!='?' && b[i]!='?' && a[i]!=b[i]){
				min++;
			}
			if(a[i]=='?' || b[i]=='?'){
				max++;
			}
		}
		cout<<min<<" "<<min+max<<endl;
	}
}