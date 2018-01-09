"""
Escreva um programa para ler 20(vinte) números. Calcule e exiba quantos desses
números possuem valor abaixo da média dos números lidos.
"""
cont = 20
m = 0
numeros=[]
for i in range (cont):
    n=int(input("Numero %d: " %(i+1)))
    m += n
    numeros.append(n)
print("Numeros: ", numeros)
media = m/cont
print("Média: ", media)

med_abaixo = [] 
for i in range(cont):
    if (numeros[i]<media):
        med_abaixo.append(numeros[i])
qnt = len(med_abaixo)
print("São %d numeros abaixo da média: %s" %(qnt, med_abaixo))
