def can_eat(coord1, coord2): #аргументами функции являются два кортежа
    x1 = coord1[0] #вытаскиваем значения из кортежа
    x2 = coord2[0]
    y1 = coord1[1]
    y2 = coord2[1]
    dx = abs(x1 - x2) #по форумле смотрим можем мы попасть из клетки А в клетку Б или нет
    dy = abs(y1 - y2)
    if dx == 1 and dy == 2 or dx == 2 and dy == 1:
        return True #если можем значение функции True
    else:
        return False #если нет то False
result = can_eat((2, 1), (4, 2))
print(result) #вывод для примера