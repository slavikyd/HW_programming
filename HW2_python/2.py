n = int(input())
cout = 0
for i in range(0, n):
    a = int(input())
    if a == 0:
        cout += 1
if cout > 0:
    print('YES')
else:
    print('NO')