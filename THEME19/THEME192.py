print("Дан целочисленный массив размера N. Удалить из массива все элементы, встречающиеся ровно два раза, и вывести размер полученного массива и его содержимое")

from collections import Counter

n=int(input("Размер массива:"))
print("Элементы массива:")
a=[]
while len(a)<n:
    a.append(int(input()))

rez=Counter(a).most_common()

for stack in rez:
    if stack[1]==2:
        for i in range (2):
            a.remove(stack[0])

print("Новый массив:",*a)