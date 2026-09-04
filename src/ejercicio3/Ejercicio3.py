import random
sucursales = [i for i in range(1, 26)]
ventas = [random.randint(100, 5000) for x in range(25)]

print("Sucursales:", sucursales)
print("Ventas:", ventas)

ventasTotalesPromedio = sum(ventas)/len(ventas)
print("Ventas totales promedio:", ventasTotalesPromedio)

for i in ventas:
    if i > ventasTotalesPromedio:
        print(i)