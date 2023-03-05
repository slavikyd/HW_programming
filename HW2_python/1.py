x = int(input())
for i in range(1, x):
    if x % i == 0 and i > 1:
        out = i
        break
    else:
        out = x
print(out)