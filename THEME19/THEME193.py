print("Дан массив размера N. Вставить элемент с нулевым значением перед минимальным и после максимального элемента массива.")

n=int(input("Размер массива:"))
print("Элементы массива:")
a=[]
while len(a)<n:
    a.append(int(input()))

imin=a.index(min(a))
imax=a.index(max(a))

a.insert(imin, int(0))
a.insert(imax+2, int(0))

print("Новый массив:",*a)