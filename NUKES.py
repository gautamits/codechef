a,n,k=map(int,input().split())
arr=[]
n=n+1
while a > 0:
    arr.append(a%n)
    a=int(a/n)
#arr.append(a)
for i in range(k-len(arr)):
    arr.append(0)
arr=arr[:k]
for i in arr:
    print(i,end=" ")
print("")
