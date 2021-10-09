print('Величина массива:')
N=int(input())
print ('Элементы массива')
a1=int(input())
a=[]
a.append(a1)

while len(a)<N:
    a1=int(input())
    a.append(a1)

a.sort()
d=a[1]-a[0]

for i in range (1, N-1):
    if a[i+1]-a[i]==d:
        d=d
        flag=0
    else:
        flag=1
        break

if flag==1: 
    print(0)
if flag==0: 
    print("Разность прогрессии", d)

