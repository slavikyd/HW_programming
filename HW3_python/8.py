#реализация через стек
inp = input().split() 
def translate_postfix(inp):
    cout = [] 

    for symb in inp: #ищем символы в введенной последовательности символов
        if symb.isdigit(): #если символ вдруг оказался цифрой
            cout.append(int(symb)) #переводим в интеджер и отдаем в стек
        else:
            b = cout.pop() #в ином случае вытаскиваем два последних элемента из стека
            a = cout.pop()
            if symb == "+": #если символ + складываем и возвращаем в стек, если - то вычитаем и.т.п
                cout.append(a + b)
            elif symb == "-":
                cout.append(a - b)
            elif symb == "*":
                cout.append(a * b)
    return cout[0] #возвращаем первый элемент стека == ответ 

print(translate_postfix(inp))