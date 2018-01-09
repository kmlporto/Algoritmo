"""
Escreva um programa para ler 06 números. Calcule e exiba se os números lidos são
distintos, ou seja, não possui repetição.
"""
cont = 6
numeros=[]


for i in range(cont):
    n=int(input("Número: "))
    numeros.append(n)

rep = 0
for n in numeros:
    if (numeros.count(n)>1):
        rep += 1
        
if rep>0:
    print("Nem todos números são distintos")
else:
    print("Todos números são distintos")
