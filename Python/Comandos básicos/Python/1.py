"""
A partir do ano de nascimento de uma pessoa, escreva um programa para
calcular e exibir a idade.
"""
print("Digite sua data de nascimento: ")
dia = int(input("Dia: "))
mes = int(input("Mês: "))
ano = int(input("Ano: "))
print("Digite a data atual: ")
dia2 = int(input("Dia: "))
mes2 = int(input("Mês: "))
ano2 = int(input("Ano: "))

idade = ano2 - ano;

if ((mes > mes2)or((mes == mes2) and (dia > dia2))):
    idade = idade - 1

print("Sua idade é %d anos" %idade)
