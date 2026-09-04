import random as rd
valores = []
for i in range(500):
    valores.append(rd.randint(50,100))

valoresPares = []
valoresImpares = []

for i in valores:
    if i%2 == 0:
        valoresPares.append(i)
    else:
        valoresImpares.append(i)
        
print("Valores Pares")
print(valoresPares)
print("Valores Impares")
print(valoresImpares)