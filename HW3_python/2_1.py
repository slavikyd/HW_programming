def transfer(chr):
    out = '0' #изначально в выходе стоит нолик
    while len(out) < chr: #пока длинна выходной строки меньше чем кол-во запрошеных символов меньше
        out = out.replace('0', '0 ').replace('1', '10').replace(' ', '1') #добавляем значения
    return out[:chr] #выводим первые n чисел последовательности
n = int(input())
print(transfer(n))