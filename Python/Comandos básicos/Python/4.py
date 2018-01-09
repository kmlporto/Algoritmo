"""
Escreva um programa, para calcular e exibir o tempo necessário (em segundos)
para percorrer uma determinada distância. Obtenha a distância percorrida e considere o
movimento uniforme (MU), com velocidade de 20 m/s.
"""

vel = int(input("Velocidade(m/s): "))
dist = int(input("Distancia(m): "))
temp = dist/vel
print("Tempo: %gs" %temp)
