n = int(input())
delitel = int(n / 2) + 1
cout = 0
out = 1
while cout < delitel:
    cout = cout + 1
    if n == 2:
        out = 2
    elif n % cout == 0:
        out = out + 1
print(out)