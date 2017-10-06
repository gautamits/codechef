#include <bits/stdc++.h>
using namespace std;
int common(int *ignored,int *tracked,int i,int t){
	int total=0;
	sort(ignored,ignored+i);
	sort(tracked,tracked+t);
	//cout<<"arrays sorted\n";
	int p=0;
	int q=0;
	while(p<i && q<t){
		if(ignored[p]==tracked[q]){
			total++;
			p++;
			q++;
		}
		else if (ignored[p] < tracked[q]) p++;
		else q++;
	}
	//cout<<"returning\n";
	return total;
}

int uncommon(int *ignored,int *tracked,int l){
	int p=0;
	int q=0;
	int result=0;
	for(int i=1;i<=l;i++){
		//cout<<"checking for "<<i<<endl;
		if(ignored[p] == i || tracked[q] == i){
			//cout<<"found\n";
			continue;
		}
		else if(ignored[p] < i && tracked[q] < i){
			//cout<<"both are less\n";
			i-=1;
			p++;
			q++;
			continue;
		}
		else if(ignored[p] < i && tracked[q] > i){

			//cout<<"incrementing p\n";
			i-=1;
			p++;
			continue;
		}
		else if(ignored[p] > i && tracked[q] < i){
			//cout<<"incrementing q\n";
			i-=1;
			q++;
			continue;
		}
		else{
			result++;
			//cout<<i<<" not found\n";
			continue;
		}

	}
	return result;
}
int main(){
	int test;
	cin>>test;
	while(test--){
		int l,i,t;
		cin>>l>>i>>t;
		int ignored[i];
		int tracked[t];
		for(int j=0;j<i;j++) cin>>ignored[j];
		for(int j=0;j<t;j++) cin>>tracked[j];
		int c=common(ignored,tracked,i,t);
		cout<<c<<" ";
		int d=uncommon(ignored,tracked,l);
		cout<<d<<endl;

	}
}