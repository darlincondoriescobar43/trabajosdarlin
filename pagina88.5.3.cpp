#include <iostream>

using namespace std;

int main() {
    int num, positivos = 0, negativos = 0, ceros = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Introduzca un número: ";
        cin >> num;

        if (num > 0) {
            positivos++;
        } else if (num < 0) {
            negativos++;
        } else {
            ceros++;
        }
    }

    cout << "Número de entradas positivas: " << positivos << endl;
    cout << "Número de entradas negativas: " << negativos << endl;
    cout << "Número de entradas de cero: " << ceros << endl;

    return 0;
}
