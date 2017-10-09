#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	int e=0,o=0;
	int a;
	while(t--){
		cin>>a;
		a%2==0?e++:o++;
	}
	if(e>o) cout<<"READY FOR BATTLE\n";
	else cout<<"NOT READY\n";

}