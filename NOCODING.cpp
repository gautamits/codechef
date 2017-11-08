#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,count,i,l;
    cin>>t;
    char ch[1001];
    while(t--)
	{
		scanf("%s",ch);
		l=strlen(ch);
		count=2;
		for(i=0;i<(l)-1;i++){
			if(ch[i+1]<ch[i]){
				count=count+(26-(ch[i]-ch[i+1]));
			}else{
				count=count+(ch[i+1]-ch[i]);
			}
			++count;	
		}
		if(count<=11*l){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
    return 0;
}