#include <stdio.h>
int main(){
	int arr[6]={100,50,10,5,2,1};
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int index=0;
		int answer=0;
		while(n>=1){
			answer+=n/arr[index];
			n=n%arr[index];
			index++;
		}
		printf("%d\n",answer);
	}
}