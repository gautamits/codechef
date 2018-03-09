def gcd(a,b):
	ma=max(a,b)
	mi=min(a,b)
	if ma%mi==0:
		return mi
	else:
		return gcd(mi,ma%mi)
for _ in range(int(input())):
	input()
	arr=list(map(int,input().split()))
	ans=arr[0]
	for i in range(1,len(arr)):
		ans=gcd(ans,arr[i])
	print(ans)
