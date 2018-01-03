#include <iostream>
#include <cstring>
using namespace std;
char arr[1000001];
long long int s;
int main(){
	int t;
	cin>>t;
	while(t--){
		s=0;
		cin>>arr;
		for(int i=0;i<strlen(arr);i++){
			if(arr[i]!='4' && arr[i]!='7') s++;
		}
	cout<<s<<endl;
	}
	return 0;
}
