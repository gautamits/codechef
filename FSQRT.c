#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a;
		scanf("%d",&a);
		int total=1;
		int answer=1;
		int temp=2;
		while(total<=a){
			total=total+temp;
			temp+=2;
			answer++;
		}
		printf("%d\n",answer-1);
	}
}