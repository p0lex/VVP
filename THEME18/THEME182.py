
n=int(input("Размер массива:"))
print("Элементы массива:")
a=[]
while len(a)<n:
    a.append(int(input()))

b=[]

for i in range (n):
	b.append(sum(a[:i+1])/(i+1))

print(*b)
