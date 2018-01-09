"""
Considerando a tabela, a seguir, escreva um programa para ler as
quantidades consumidas por um cliente, calcular e exibir o preço
total da venda.
Chocolate - R$1,50
Refrigerante - R$2,00
Misto Quente - R$2,00
Sorvete - R$1,50
"""
v_choc = 1.5
v_refri = 2.0
v_mist = 2.0
v_sorv = 1.5
total = 0


print("Digite as quantidades consumidas para cada produto: ")
qnt_choc = int(input("Chocolate: "))
total += v_choc*qnt_choc
qnt_refri = int(input("Refrigerante: "))
total += v_refri*qnt_refri
qnt_mist = int(input("Misto Quente: "))
total += v_mist*qnt_mist
qnt_sorv = int(input("Sorvete: "))
total += v_sorv*qnt_sorv

print("Total a pagar: RS%4.2f" %total)
