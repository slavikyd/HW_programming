n = int(input())

out = 1
cout = 1
for i in range(1, n + 1):
    cout = cout / i
    out += cout

if out % 1:
    print(round(out, 5))
else:
    print(round(out))