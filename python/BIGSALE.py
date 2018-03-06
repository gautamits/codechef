for _ in range(int(input())):
  items=int(input())
  total=0
  for i in range(items):
    price, quantity, discount = list(map(int,input().split()))
    price2=price-(price*discount)/100
    price2=price2+(price2*discount)/100
    total+=quantity*(price-price2)
  print(total)