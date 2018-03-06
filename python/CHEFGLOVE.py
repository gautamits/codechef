for _ in range(int(input())):
  n=int(input())
  fingers=list(map(int,input().split()))
  gloves=list(map(int,input().split()))
  front=True
  back=True
  for i in range(n):
    if fingers[i] > gloves[i]:
      front=False
    if fingers[i] > gloves[n-i-1]:
      back=False
  if front and back:
    print('both')
  elif front:
    print('front')
  elif back:
    print('back')
  else:
    print('none')
  