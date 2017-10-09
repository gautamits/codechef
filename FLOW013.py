t=int(input())
for i in range(t):
	a,b,c=map(int,raw_input().split())
	if a==0 or b==0 or c==0:
		print "NO"
	elif a+b+c!=180:
		print "NO"
	else:
		print "YES"

