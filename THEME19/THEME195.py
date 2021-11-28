print("Дан массив размера N. Перед каждым положительным элементом массива вставить элемент с нулевым значением.")
n=int(input("Размер массива:"))
print("Элементы массива:")
a=[]
while len(a)<n:
    a.append(int(input()))

count=0

for i in range (len(a)):
    if a[i+count]>0:
        a.insert(i+count, int(0))
        count+=1

print("Новый массив",*a)