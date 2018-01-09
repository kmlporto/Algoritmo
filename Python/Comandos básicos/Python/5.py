"""
Escreva um programa para obter uma data (dia, mês e ano) e converter em
segundos. Considere o mês com 30 dias e o ano com 12 meses.
"""

print("Digite uma data: ")
dia = int(input("Dia: "))
mes = int(input("Mês: "))
ano = int(input("Ano: "))
mes += ano*12
dia += mes*30
segundos = dia*24*60*60
print("Essa data em segundos é: %d" %segundos)
