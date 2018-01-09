"""
Escreva um programa que preencha duas matrizes 2x3 com valores inteiros fornecidos pelo usuário.
O programa deverá somar as duas matrizes, armazenando o resultado em uma terceira matriz, que
deverá ser exibida.
"""
matriz1 = []
matriz2 = []

#receber valores
for i in range(2):
    linha = []
    for j in range(3):
        n = int(input("n%d%d: " %(i+1,j+1)))
        linha.append(n)
    matriz1.append(linha)

#imprimir matriz
for i in range(2):
    print(matriz1[i])

#receber valores
for i in range(2):
    linha = []
    for j in range(3):
        n = int(input("n%d%d: " %(i+1,j+1)))
        linha.append(n)
    matriz2.append(linha)


#imprimir matriz
for i in range(2):
    print(matriz2[i])

soma = []
#soma das matrizes
for i in range(2):
    linha = []
    for j in range(3):
        s = matriz1[i][j]+matriz2[i][j]
        linha.append(s)
    soma.append(linha)


#imprimir soma
print("Soma: ")
for i in range(2):
    print(soma[i])
