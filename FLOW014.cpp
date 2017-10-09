#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int hardness;
	float carbon;
	int strength;
	bool a;
	bool b;
	bool c;
	int total;
	while(t--){
		cin>>hardness>>carbon>>strength;
		total=0;
		a=0;
		b=0;
		c=0;
		if(hardness > 50 ){
			a=1;
			total+=1;
		}
		if(carbon < 0.7 ){
			b=1;
			total+=1;
		}
		if(strength > 5600){
			c=1;
			total+=1;
		}
		if(total==3){
			cout<<"10\n";
			continue;
		}
		else if(total==1){
			cout<<"6\n";
			continue;
		}
		else if(total==0){
			cout<<"5\n";
			continue;
		}
		else{
			if(a&&b) cout<<"9\n";
			else if(b&&c) cout<<"8\n";
			else cout<<"7\n";
		}



	}

	return 0;
}