#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int k=n/2-1;
		int answer;
		if(k){
			answer=(k*(k+1))/2;

		}
		printf("%d\n",answer);
	}
}