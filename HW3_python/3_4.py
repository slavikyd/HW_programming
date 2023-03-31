x = input().split()  
n = 1
for i in range(0, n):    
    cout = x[len(x) - 1]     #ищем последний элемент
    for j in range(len(x) - 1, -1, -1):    
        x[j] = x[j - 1]     #сдвигаем список на столько, сколько указали в переменной n
    x[0] = cout     
print(' '.join(x))