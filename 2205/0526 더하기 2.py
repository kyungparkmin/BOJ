n = ''
while True:
  try:
    n += input().strip()
  except:
    break;
  
print(sum(map(int, n.split(','))))