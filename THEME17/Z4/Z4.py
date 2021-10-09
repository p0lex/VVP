print ("Размер массива:")
N=int(input())
print("Элементы массива:")
a=[]
num=0

while len(a)<N:
    a.append(int(input()))
a.append(0)
a.insert(0,0)
N=len(a)

for i in range (N-1):
    if a[i]>a[i+1] and a[i]>a[i-1]:
        num=i
        

print("Позиция:",num-1)