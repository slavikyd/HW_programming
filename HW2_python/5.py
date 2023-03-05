i = 0
max = 0
cout = 1
while True:
    n = int(input())
    if n > max:
        max = n
    elif n == max:
        cout += 1
    elif n == 0:
        break  
print(cout)
