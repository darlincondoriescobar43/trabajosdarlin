#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double suma = 0;

    for (int n = 1; n <= 20; n++) {
        double termino = pow(n, 2) / (3*n);
        suma += termino;
    }

    cout << "La suma de los 20 primeros términos de la serie es: " << suma << endl;

    return 0;
}
