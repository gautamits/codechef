n=int(input())
a=map(int,input().split())
if sum(a) == (n*(n+1))/2.0:
	print("YES")
else:
	print("NO")