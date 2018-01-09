"""
Escreva um programa que preencha uma matriz 3x3 com valores reais fornecidos pelo usuário. O
programa deverá exibir:
a) A soma dos elementos da primeira linha da matriz
b) A soma dos elementos da terceira coluna da matriz
c) A soma dos elementos da diagonal principal da matriz
"""
matriz = []
A = 0
B = 0
C = 0

#receber valores
for i in range(3):
    linha = []
    for j in range(3):
        n = int(input("n%d%d: " %(i+1,j+1)))
        linha.append(n)
    matriz.append(linha)

#imprimir matriz
for i in range(3):
    print(matriz[i])

#ver elementos da matriz
for i in range(3):
    for j in range(3):
        if (i==0):
            A += matriz[i][j]
        if (j==2):
            B += matriz[i][j]
        if (i==j):
            C += matriz[i][j]
print("Soma da primeira linha: ", A)
print("Soma da terceira coluna: ", B)
print("Soma da diagonal principal: ", C)
