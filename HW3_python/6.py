mas = []
n = int(input())
for i in range(n):
    inp = input().split()
    mas.append(inp)
k = 0
out = 0
while k != n - 1:
    if mas[k][k] == mas[k + 1][k + 1]:
        out += 1    
    k += 1
if out == n:
    print('YES')
else:
    print('NO')