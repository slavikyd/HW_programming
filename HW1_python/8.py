#работает но не до конца
n = int(input())
k = int(input())
row = int(input())
column = int(input())
p1 = (row - 1) * 2 + column - k
p2 = (row - 1) * 2 + column + k
r1 = (p1 + 1) // 2
r2 = (p2 + 1) // 2
 
if p1 > 0 and (p2 > n or abs(row - r1) < abs(row - r2)):
    print(r1, 2 - p1 % 2)
elif p2 <= n:
    print(r2, 2 - p2 % 2)
else:
    print(-1)
