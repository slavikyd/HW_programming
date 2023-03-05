out = 0
cout = 1
a = int(input())
while a:
    b = int(input())
    if a == b:
        cout += 1
    else:
        if cout > out :
            out = cout
            cout = 1
    a = b
print(out)  