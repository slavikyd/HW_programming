n = int(input())
cout = n // 60
cout1 = (n % 60) // 10
cout2 = n % 10
if cout2 * 15 > 125:
    cout2 = 0
    cout1 += 1
elif (cout2 * 15) + (cout1 * 125) > 440:
    cout2 = 0
    cout1 = 0
    cout += 1
print(cout2, end=' ')
print(cout1, end = ' ')
print(cout, end = ' ')
