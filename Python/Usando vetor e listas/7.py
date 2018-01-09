"""
Escreva um programa para ler 06 números (entre 1 e 6) distintos, ou seja, não podem
repetir. Exiba os números lidos.
"""
cont = 6
numeros = []
while(len(numeros)<cont):
    n=int(input("Numero: "))
    if not(n in numeros):
        numeros.append(n)
    else:
        print("numero repetido, digite novamente")
print("Numeros: ", numeros)
