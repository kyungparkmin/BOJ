
for _ in range(int(input())):
  str = input().lower()
  if str == str[::-1]:
    print('Yes')
  else:
    print('No')