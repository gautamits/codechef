#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int n;
	bool result;
	bool check;
	while(t--){
		cin>>n;
		check=0;
		char temp[6];
		char ch;
		result=1;
		for(int i=0;i<n;i++){
			scanf("%s%c",temp,&ch);
			//printf("%s ",temp);
			
			if(!strcmp("cookie",temp)){
				if(check==1){
					//cout<<"caught\n";
					result=0;
					//break;
				}
				else{
					check=1;
					//cout<<" time to check\n";
				}
			}
			else{
				check=0;
				//cout<<"we are good\n";
				continue;
			}
			if(ch=='\n') break;

		}
		if(result==1 && check==0) cout<<"YES\n";
		else cout<<"NO\n";


	}
}