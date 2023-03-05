i = 0
cout = 0
while True:
    n = int(input())
    if n == 0:
        break
    else:
        cout = cout + n
        i += 1
print(cout / i)