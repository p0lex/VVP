n=int(input("Размер массива:"))
print("Элементы массива:")
a=[]
while len(a)<n:
    a.append(int(input()))

mi=a.index(min(a))
ma=a[::-1].index(max(a))

for i in range (mi+1, n-1-ma):
	a[i]=0
print(*a)
