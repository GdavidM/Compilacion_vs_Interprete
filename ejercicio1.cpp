#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int valores = 0;
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        valores += rand() % 100 + 1;
    }

    cout << valores << endl;
    cout << static_cast<double>(valores) / 10 << endl;

    return 0;
}