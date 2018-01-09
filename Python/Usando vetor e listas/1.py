#Escreva um programa para ler 10 números. Exiba os números informados.
numeros=[]
for i in range (0,10):
    n=int(input("Numero %d: " %(i+1)))
    numeros.append(n)
print("Numeros: ", numeros)
