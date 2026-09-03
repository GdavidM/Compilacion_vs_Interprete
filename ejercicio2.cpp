#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    vector<int> valores;
    srand(time(0));

    for (int i = 0; i < 500; i++) {
        valores.push_back(rand() % 51 + 50);
    }

    vector<int> valoresPares;
    vector<int> valoresImpares;

    for (int val : valores) {
        if (val % 2 == 0) {
            valoresPares.push_back(val);
        } else {
            valoresImpares.push_back(val);
        }
    }

    cout << "Valores Pares:" << endl;
    for (int val : valoresPares) {
        cout << val << " ";
    }
    cout << endl << endl;

    cout << "Valores Impares:" << endl;
    for (int val : valoresImpares) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}