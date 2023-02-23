inp = int(input())
res = ''
while inp > 0:
    if inp >= 1000:
        cout = inp // 1000 #если введенное число больше тысячи прибавляем к ответу M
        for i in range(cout):
            res += 'M'
            inp %= 1000
    elif inp >= 500: #если число больше 500 проверяем 900 ли это, если да вносим в ответ соотв. значение если нет вносим букву D
        if inp >= 900:
            res += 'CM'
            inp %= 900
        else:
            res += 'D'
            inp %= 500
    elif inp >= 100: #по аналогии с 500 проходимся по значениям которые больше 100 но меньше 400
        if inp >= 400:
            res += 'CD'
            inp %= 400
        else:
            cout = inp // 100
            for i in range(cout):
                res += 'C'
                inp %= 100
    elif inp >= 50: #снова по той же схеме но уже в диапазоне от 50 до 90
        if inp >= 90 :
            res += 'XC'
            inp %= 90
        else:
            res += 'L'
            inp %= 50
    elif inp >= 10: #диапазон от 10 до 40
        if inp >= 40:
            res += 'XL'
            inp %= 40
        else:
            cout = inp // 10
            for i in range(cout):
                res += 'X'
                inp %= 10
    elif inp >= 5: #последний диапазон от 5 до 9
        if inp >= 9:
            res += 'IX'
            inp %= 9
        else:
            res += 'V'
            inp %= 5
    else:
        if inp >= 4:
            res += 'IV'
            inp %= 4
        else: #ввод единиц если имеются
            cout = inp // 1
            for i in range(cout):
                res += 'I'
                inp %= 1
print(res)