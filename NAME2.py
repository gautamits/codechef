def subsequence(m,w):
	j=0
	for i in range(len(m)):
		while j < len(w):
			if w[j]==m[i]:
				break
			j+=1
		if j >= len(w):
			return False
		i+=1
		j+=1
	return True

for _ in range(int(raw_input())):
	m,w=raw_input().split()
	if subsequence(m,w) or subsequence(w,m):
		print "YES"
	else:
		print "NO"