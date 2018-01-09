"""
Um viajante possui uma verba de R$ 8.000,00 para gastar durante as festas de final de
ano. Escreva um programa para ler os gastos com: passagem, hospedagem e
alimentação. Calcule e exiba se é possível realizar essa viagem. Só é possível realizar
a viagem se os gastos forem compatíveis com o orçamento
"""

passagens = float(input("Valor das passagens (ida+volta): "))
hosped = float(input("Valor da hospedagem diária: "))
aliment = float(input("Valor da alimentação diária: "))
dias_viagem = int(input("Quantos dias deseja viajar: "))
custo_total = ((hosped + aliment)*dias_viagem)+ passagens;

if (custo_total < 8000): print("Você possui dinheiro suficiente para essa viagem")
else: print("Você não possui dinheiro suficiente para essa viagem")
