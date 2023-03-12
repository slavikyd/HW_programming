#проходит тольок два базовых теста, не работает от слова совсем
n = int(input())
out = 0
lettercout = 110
i = 0
while i != n:
    i += 1
    letter = int(input())
    if letter < lettercout:
        lettercout = letter
        out = (n - 1) * lettercout
    elif letter < lettercout:
        letter -= lettercout
        out1 = (n - 1) * lettercout
        out += out1
    elif letter == lettercout:
        out = (n - 1) * lettercout
    #out += out1
    
print(out)