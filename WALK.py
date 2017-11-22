t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    speed=0
    index=len(arr)-1
    
    for i in arr[::-1]:
        speed+=1
        if speed<i:
            if(i==max(arr)):
                speed=i+index
                break
            else:
                speed=i
        
        index-=1
    print(speed) 
