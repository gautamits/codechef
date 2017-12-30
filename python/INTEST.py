n,k=map(int,raw_input().split())
total=0
for i in range(n):
	a=int(raw_input())
	if a%k==0:
		total+=1
print total