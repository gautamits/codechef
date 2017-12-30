a,b,c=map(int,input().split())
one=set()
two=set()
three=set()
for i in range(a):
	one.add(int(input()))
for i in range(b):
	two.add(int(input()))
for i in range(c):
	three.add(int(input()))
result=sorted(list(one.intersection(two).union(one.intersection(three)).union(two.intersection(three))))
print(len(result))
for i in result:
	print(i)
