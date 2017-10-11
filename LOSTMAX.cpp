#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	long long int temp;
	char ch;
	long long int max1;
	long long int max2;
	while(t--){
		//vector<long long int> numbers;
		//while( getline(cin,rawInput,' ')) 
		max1=0;
		max2=0;
		int c=0;;
		while(2 == scanf("%lld%c",&temp,&ch)){
		c++;
		
		//numbers.push_back(rawInput);
			if(temp>max1){
				max2=max1;
				max1=temp;
			}
			else if(temp>max2) max2=temp;
			if(ch=='\n') break;
		}
	//cout<<c<<endl;
	long long int result;
	//cout<<max1+max2-c-1<<endl;
	long long int m;
	if(max1>max2) m=max1;
	else m=max2;
	if(m!=c-1) cout<<m<<endl;
	else cout<<max2<<endl;
	//cout<<max1<<" "<<max2<<endl;
	//cout<<result<<endl;


	}
}