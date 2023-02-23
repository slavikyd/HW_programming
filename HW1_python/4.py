inp = int(input())
#решение через листы более быстрое и короткое
ones = ['','I','II','III','IV','V','VI','VII','VIII','IX']
tens = ['','X','XX','XXX','XL','L','LX','LXX','LXXX','XC']
hunds = ['','C','CC','CCC','CD','D','DC','DCC','DCCC','CM']
thous = ['','M','MM','MMM','MMMM']
#вычисляем индексы нужных нам значений
thousands = thous[inp // 1000]
hundreds = hunds[inp // 100 % 10]
ten = tens[inp // 10 % 10]
one =  ones[inp % 10]
#складываем полученное в одну переменную
out =  thousands+hundreds+ten+one
       
print(out)