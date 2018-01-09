"""
Escreva um programa para ler dois números inteiros. O programa deverá calcular e
exibir:
Quociente da divisão;
Resto da divisão
"""

num1 = int(input("Número 01: "))
num2 = int(input("Número 02: "))
print("%d/%d = %.2d\nResto: %.2d" %(num1, num2, num1/num2, num1%num2))
