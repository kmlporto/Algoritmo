"""
Escreva um programa para ler 10 números. Exiba os números lidos na forma invertida.
Exemplo: 1 20 3 -> 3 20 1
"""
numeros=[]
for i in range (0,10):
    n=int(input("Numero %d: " %(i+1)))
    numeros.append(n)
print("Numeros: ", numeros)

numeros.reverse()
print("Numeros - Reverse: ", numeros)
