from collections import Counter

print ("Размер массива:")
N=int(input())
print("Элементы массива:")
a=[]
while len(a)<N:
    a.append(int(input()))


rez=Counter(a).most_common(1)

print("Номера одинаковых элементов:")
print(a.index(rez[0][0])+1)
a[a.index(rez[0][0])]=0
print(a.index(rez[0][0])+1)