#pegar todos os estados
estados=[]
for i in range(0,3,1):
  nome = input("ESTADO: ")
  estados.append(nome)


votos=[]
#pegar todos os votos
v = input("Melhor estado: ")
while (v in estados):
  votos.append(v)
  v = input("Melhor estado: ")

#variavel para comparar o estado mais votado, e quant de votos que o mais votado 
#por enquanto nao existe e a quant de votos é 0
quant_votos = 0
mais_votado = []

for estado in estados:
  #a quant de votos seja maior que o mais votado
  if votos.count(estado)>quant_votos:
    #limpar a lista de mais votado
    mais_votado.clear()
    #adicionar o nome elemento mais votado
    mais_votado.append(estado)
    #qnt de votos do mais votado sera novo valor 
    quant_votos = votos.count(estado)
  #caso de empate
  elif votos.count(estado)==quant_votos:
    mais_votado.append(estado)
print(mais_votado)
