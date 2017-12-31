for _ in range(int(raw_input())):
	raw_input()
	arr=map(int,raw_input().split())
	print sum(arr)-len(arr)*min(arr)