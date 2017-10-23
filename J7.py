import math
for i in range(int(input())):
	p,s=map(int,input().split())
	if math.sqrt(s/6.0) <= p/12.0:
		print(math.sqrt((s/6.0)**3))
	else:
		print((p/12.0)**3)