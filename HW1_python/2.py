x1 = int(input())
y1 = int(input())
x2 = int(input())
y2 = int(input())
#проверяем попадают ли заданные точки в одну четверть
if x1 >= 0 and x2 >= 0 and y1 >= 0 and y2 >= 0 or x1 <= 0 and x2 <= 0 and y1 <= 0 and y2 <= 0 or x1 >= 0 and x2 >= 0 and y1 <= 0 and y2 <= 0 or x1 <= 0 and x2 <= 0 and y1 >= 0 and y2 >= 0: 
    print('YES')
else:
    print('NO')
#второй вариант решения
'''
x1 = int(input())
y1 = int(input())
x2 = int(input())
y2 = int(input())
if x1 >= 0 and x2 >= 0 and y1 >= 0 and y2 >= 0: #проверяем попадают ли обе точки в первую четвреть
    print('YES')
elif x1 <= 0 and x2 <= 0 and y1 <= 0 and y2 <= 0: #проверяем попадают ли обе точки в третью четверть
    print('YES')
elif x1 >= 0 and x2 >= 0 and y1 <= 0 and y2 <= 0: #проверяем попадают ли обе точки в четвертую четвреть
    print('YES')
elif x1 <= 0 and x2 <= 0 and y1 >= 0 and y2 >= 0: #проверяем попадют ли обе точки во вторую четверть
    print('YES')
else:
    print('NO')

'''