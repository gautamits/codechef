#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char i;
		cin>>i;
		if(i=='B' || i=='b') cout<<"BattleShip\n";
		if(i=='C' || i=='c') cout<<"Cruiser\n";
		if(i=='D' || i=='d') cout<<"Destroyer\n";
		if(i=='F' || i=='f') cout<<"Frigate\n";
	}
	return 0;
}