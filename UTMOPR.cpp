#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int t;
	
	scanf("%d",&t);
	
	while(t--)
	{
		int n,k,s=0;
	scanf("%d",&n);
	scanf("%d",&k);
	int a[n+k];
	
		for(int i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		s=s+a[i];
		}
		
		for(int i=n;i<n+k;i++)
		{
			a[i]=s+1;
			s=s+a[i];
		}
		
		if(a[n+k-1]%2==0)
		printf("\neven");
	
		else
		printf("\nodd");
	}
	
	return 0;
 
}