n = int(input())
if n % 10 == 1 and n not in range(11, 21):
    print(n, 'korova')
elif  n % 10 > 1 and n % 10 < 5 and n not in range(11, 21):
    print(n, 'korovy')
elif n % 10 >= 5 or n % 10 == 0 or n in range(11, 21):
    print(n, 'korov')