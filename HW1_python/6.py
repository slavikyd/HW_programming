a = int(input())
b = int(input())
c = int(input())
D = (b ** 2) * (-4 * a * c)
if D >= 1:
    x1 = (-b + (D**0.5)) / (2 * a)
    x2 = (-b - (D**0.5)) / (2 * a)
    print(int(x1), int(x2))
elif D == 0:
    x = (-b / (2 * a))
    print(int(x))