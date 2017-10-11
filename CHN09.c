#include <stdio.h>
#include <string.h>
int main(){
	int t;
	char arr[101];
	int a;
	int b;
	scanf("%d",&t);
	while(t--){
		scanf("%s",arr);
		a=0;
		b=0;
		int i;
		for(i=0;i<strlen(arr);i++){
			if(arr[i]=='a') a++;
			else b++;
		}
		printf("%d\n",a<b?a:b);

	}
	return 0;
}