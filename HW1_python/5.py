a = int(input())
b = int(input())
#ответ получится в случае если b делится без остатка на a
if b % a == 0:
    print (-b // a)
elif b == 0: #если же b = 0 то ответов будет бесконечно много
   print ('INF')
else:
    print('NO')