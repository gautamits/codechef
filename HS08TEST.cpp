#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a;
	float b;
	cin>>a>>b;
	if(a%5==0 && (a+0.5) < b){
		printf("%.2f\n",b-a-0.5);
	}
	else printf("%.2f\n",b);
}