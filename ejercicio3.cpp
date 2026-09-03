#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    vector<int> sucursales(25);
    vector<int> ventas(25);
    srand(time(0));

    for (int i = 0; i < 25; i++) {
        sucursales[i] = i + 1;
        ventas[i] = rand() % 4901 + 100;
    }

    cout << "Sucursales: ";
    for (int s : sucursales) {
        cout << s << " ";
    }
    cout << endl;

    cout << "Ventas: ";
    for (int v : ventas) {
        cout << v << " ";
    }
    cout << endl;

    double suma = 0;
    for (int v : ventas) {
        suma += v;
    }
    double ventasTotalesPromedio = suma / ventas.size();

    cout << "Ventas totales promedio: " << ventasTotalesPromedio << endl;

    cout << "Ventas mayores al promedio:" << endl;
    for (int v : ventas) {
        if (v > ventasTotalesPromedio) {
            cout << v << " ";
        }
    }
    cout << endl;

    return 0;
}