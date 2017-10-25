#include <bits/stdc++.h>
using namespace std;
int dist(int x1,int y1,int x2,int y2){
	return pow((x2-x1),2)+pow((y2-y1),2);
	}
int max(int a,int b){
	return a>b?a:b;
	}
int min(int a,int b){
	return a<b?a:b;
	}
int main(){
	long int t;
	cin>>t;
	int x1,y1,x2,y2,x3,y3;
	int total=0;
	while(t--){
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		int d1=dist(x1,y1,x2,y2);
		int d2=dist(x1,y1,x3,y3);
		int d3=dist(x2,y2,x3,y3);
		int ma=max(max(d1,d2),max(d1,d3));
		int mi=min(min(d1,d2),min(d1,d3));
		int temp=d1+d2+d3-ma-mi;
		//cout<<ma*ma<<" "<<temp*temp<<" "<<mi*mi<<endl;
		if(ma == mi + temp){
		//cout<<" yay"<<endl;
		total++;
		}
		}
	cout<<total<<endl;
	}
	
