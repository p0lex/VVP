print ("Размер массива:")
N=int(input())
print("Элементы массива:")
a=[]

while len(a)<N:
    a.append(int(input()))

list=[]

for i in range(2,N,2):
    list.append(a[i])

print ("Минимальный элемент:", min(list))
