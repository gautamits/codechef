#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int ax,ay,bx,by,cx,cy;
		cin>>ax>>ay>>bx>>by>>cx>>cy;
		float ac=sqrt(pow((ax-cx),2)+pow((ay-cy),2));
		float bc=sqrt(pow((bx-cx),2)+pow((by-cy),2));
		float ab=sqrt(pow((ax-bx),2)+pow((ay-by),2));
		int total=0;
		//cout<<ab<<" "<<ac<<" "<<bc<<endl;
		if(ab <= n) total+=1;
		if(ac <= n) total+=1;
		if(bc <= n) total+=1;
		if(total>=2) cout<<"yes\n";
		else cout<<"no\n";
			
		}
}