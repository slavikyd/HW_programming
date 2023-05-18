x = input().split()
for i in range(0, len(x)):    #ищем последнее число
    lst = x[len(x) - 1] 
frst = x[0] #сохраняем первое во временную переменную
x.remove(frst)
x.append(frst)
print(' '.join(x))