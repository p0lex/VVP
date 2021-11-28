print("Дано целое число K (> 0) и целочисленный массив размера N. Поменять местами последнюю серию массива и его серию с номером K ")

k=int(input("Ведите число:"))-1
n=int(input("Размер массива:"))
print("Элементы массива:")
a=[]
b=[]
c=[]
while len(a)<n:
    a.append(int(input()))

pred=a[0]
ln=0
obm=0

for elem in a:
    if elem==pred:
        ln+=1
    else:
        c.append([pred for i in range(ln)])
        ln=1
    pred=elem

c.append([pred for i in range(ln)])

obm=c[len(c)-1]
c[len(c)-1]=c[k]
c[k]=obm

for seri in c:
    for el in seri:
        b.append(el)

print("Новый массив:", *b)
