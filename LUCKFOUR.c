#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char s[10];
		scanf("%s",s);
		//printf("%s\n",s);
		int total=0;
		int i=0;
		while(s[i]!='\0'){
			if(s[i]=='4') total++;
			i++;
		}
		printf("%d\n",total);
	}
}