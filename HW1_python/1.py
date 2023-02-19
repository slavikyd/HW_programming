k = int(input())
m = int(input())
n = int(input())
if n > k:
    iter = n // k
    out = m * 2 * n * iter
    print(out)
else:
    out = n * m * 2
    print(out)