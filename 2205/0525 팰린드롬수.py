while(True):
  n = str(input())
  if n == '0':
    break;
  n1 = n[::-1]
  if n == n1:
    print('yes')
  else:
    print('no')