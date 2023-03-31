def isSymmetric(num):
    x = 0
    for j in range(1, len(num) - 1): #получение строки \ столбца по диагонали
        for i in range(j, len(num)): #проходимся по значениям строчки
            if num[i][x] != num[x][i]: #если значение на котором мы стоим не равно значению на противоположных координатах матрица не симметрична
                print('NO')
                return #выходим из функции
        x += 1 #обновляем счетчик
    print('YES')

n = int(input())
inp = [list(map(int, input().split())) for i in range(n)] #ввод матрицы в одну строчку через for
isSymmetric(inp)