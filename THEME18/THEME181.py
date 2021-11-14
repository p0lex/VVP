a=[]
b=[]

Na=int(input("Размер массива а:"))
print("Элементы массива:")
while len(a)<Na:
    a.append(int(input()))

Nb=int(input("Размер массива b:"))
print("Элементы массива:")
while len(b)<Nb:
    b.append(int(input()))

b1=[]
a1=[]

for i in range (Na):
	a1.append(a[i])

for i in range (Nb):
	b1.append(b[i])

for i in range (min(Na,Nb)):
	a[i]=b1[i]
	b[i]=a1[i]
	
print(*a)
print(*b)
