"""
Escreva um programa que preencha uma matriz 4x3 com valores reais fornecidos pelo usuário e
mostre a sua transposta. Dada uma matriz A de ordem m x n, a matriz transposta dela será
representada por At de ordem “invertida” n x m.
"""
A = []
m = 4
n = 3
for i in range(m):
    linha = []
    for j in range(n):
        n = int(input("n%d%d: " %(i+1, j+1)))
        linha.append(n)
    A.append(linha)
"""
for i in range(m):
    print(A[i])


"""


At = []
for i in range(n):
    linha = []
    for j in range(m):
        linha.append(A[j][i])
    At.append(linha)
for i in range(n):
    print(At[i])

