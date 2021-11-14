n=int(input("Размер массива:"))
print("Элементы массива:")
a=[]
while len(a)<n:
    a.append(int(input()))

b=[]
d=0

for i in range (n):
	b.append(a[i])

for i in range (n):
	if b[i]%2==1:
		b[i]+=d
		d=a[i]
		
print(*b)
	
