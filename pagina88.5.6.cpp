#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    for (int i = 1; i <= 30; i++) {
        suma += (2 * i);
    }

    cout << "La suma de los primeros 30 números pares es: " << suma << endl;

    return 0;
}
