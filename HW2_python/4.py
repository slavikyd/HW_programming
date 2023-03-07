out = 0
cout = 1
n = int(input())
while n:
    cout1 = int(input())
    if n == cout1:
        cout += 1
    else:
        if cout > out :
            out = cout
            cout = 1
    n = cout1
print(out)  