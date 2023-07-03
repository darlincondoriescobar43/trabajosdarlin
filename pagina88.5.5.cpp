#include <iostream>
using namespace std;

int main() {
    int limite, base, potencia = 1;

    cout << "Introduzca un límite máximo entero positivo: ";
    cin >> limite;

    cout << "Introduzca una base entera positiva: ";
    cin >> base;

    while (potencia < limite) {
        cout << potencia << endl;
        potencia *= base;
    }

    return 0;
}
