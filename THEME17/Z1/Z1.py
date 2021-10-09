import random
print("Размер массива:")
N=int(input())
print("Позиции чисел (в строчку):")
K,L=map(int, input().split()) 
K-=1
L-=1
a=[random.randint(0, 101) for i in range (N)] 
print("Массив:", *a)
m=K
summ=0

while m<=L:                
    summ+=a[m]
    m+=1

print ("Среднее арифметическое:",summ/(L-K+1)) 
