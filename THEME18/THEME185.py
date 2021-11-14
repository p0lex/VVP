n=int(input("Размер массива:"))
print("Элементы массива:")
a=[]
while len(a)<n:
    a.append(int(input()))

a.sort()
print(*a)
