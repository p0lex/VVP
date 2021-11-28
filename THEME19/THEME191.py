print("Дан целочисленный массив размера N. Удалить из массива все соседние одинаковые элементы, оставив их первые вхождения.")
n=int(input("Размер массива:"))
print("Элементы массива:")
a=[]
while len(a)<n:
    a.append(int(input()))
i=1
while True:
    if i>=len(a)-1: break
    if a[i]==a[i-1]:
        a.pop(i)
    elif a[i]==a[i+1]:
        a.pop(i+1)
    else: i+=1
   

print ("Новый массив:",*a)