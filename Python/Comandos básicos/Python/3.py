"""
Escreva um programa para obter as três notas (valores reais – float)
de um aluno. O programa deverá calcular e exibir:
- Média aritmética;
- Média ponderada (pesos: Nota 1 = 2, Nota 2 = 3, Nota 3 = 5).
"""

n = []
peso = [2,3,5]
media_arit = 0
media_pond = 0
soma = 0


for i in range(3):
    nota = int(input("Nota %02d: " %(i+1)))
    n.append(nota)
    media_arit += n[i]
    for j in range(3):
        if i == j:
            media_pond += n[i]*peso[j]
            soma += peso[j]
media_pond /= soma
media_arit /= 3

print("Média aritmética: %d\nMédia ponderada: %d" %(media_arit, media_pond))
