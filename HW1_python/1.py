k = int(input())
m = int(input()) #ввод
n = int(input())
if n > k: #если n < k то нам будет нужно больше одной итерации жарки
    iter = n // k
    out = m * 2 * n * iter
    print(out)
else:
    out = n * m * 2 #иначе нам хватит одной итерации 
    print(out)
