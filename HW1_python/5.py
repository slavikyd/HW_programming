a = int(input())
b = int(input())

if b % a == 0:
    print (-b // a)
elif b == 0:
   print ('INF')
else:
    print('NO')