#include <iostream>
using namespace std;

int main() {
    int suma = 0;
    int i = 1;
    int maximo;
    int n;

    cout << "Introduce un número máximo: ";
    cin >> maximo;

    while (suma <= maximo) {
        suma += i*i - i - 2;
        i++;

        if (suma > maximo) {
            n = i - 1;
            break;
        }
    }

    cout << "El número natural más pequeño n cuya suma de los n primeros términos de Σ i² - i - 2 excede " 
         << maximo << " es " << n << endl;

    return 0;
}
