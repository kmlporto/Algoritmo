"""
Escreva um programa para ler 10 números. Exiba:
▪ Números que estão nos índices “par”;
▪ Números que estão nos índices “ímpar”.
"""


numeros=[]
for i in range (0,10):
    n=int(input("Numero %d: " %(i+1)))
    numeros.append(n)
print("Numeros: ", numeros)

impares = []
pares = []
for i in range (0,10):
    if (i%2==0):
        impares.append(numeros[i])
    else:
        pares.append(numeros[i])

print("Índicie impar: ", impares)
print("Índicie par: ", pares)
