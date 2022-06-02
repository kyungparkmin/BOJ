n = int(input())

list = list(map(int, input().split()))
max = max(list)

list1 = []

for i in list:
  list1.append(i/max*100)

avg = sum(list1)/n

print(avg)