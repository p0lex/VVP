print("Дано множество A из N точек (точки заданы своими координатами x, y). Среди всех точек этого множества, лежащих во второй четверти, найти точку, наиболее удаленную от начала координат. Если таких точек нет, то вывести точку с нулевыми координатами")

n=int(input("Количество точек:"))
print("Координаты точек:")
a=[]
x=0
y=0
r=[]

while len(a)<n:
    x,y=map(int, input().split())
    if x<=0 and y>=0:
        a.append([x,y])
        r.append((x**2+y**2)**0.5)
r.sort()

if r[0]==r[len(r)-1]:
    print("Такой точки нет")
else:
    print("Максимально удаленная:",a[r.index(max(r))])
