print("Дано целое число L (> 0) и целочисленный массив размера N. Заменить каждую серию массива, длина которой больше L, на один элемент с нулевым значением")

l=int(input("Ведите число:"))
n=int(input("Размер массива:"))
print("Элементы массива:")
a=[]
c=[]
while len(a)<n:
    a.append(int(input()))

pred=a[0]
ln=0

for elem in a:
    if elem==pred:
        ln+=1
    else:
        if ln>l:
            c.append(0)
        else:
            for i in range(ln): c.append(pred)
        ln=1
    pred=elem

if ln>l:
    c.append(0)
else:
    for i in range(ln): c.append(pred)

print("Новый массив:",*c)