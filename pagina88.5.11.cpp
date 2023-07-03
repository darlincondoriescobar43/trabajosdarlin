#include <iostream>
using namespace std;

int main() {
    int n, numero;
    int maximo = -999999, minimo = 999999;
    float suma = 0, media;

    cout << "Ingrese el valor de n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el número " << i << ": ";
        cin >> numero;

        // Actualizar el valor máximo y mínimo
        if (numero > maximo) {
            maximo = numero;
        }
        if (numero < minimo) {
            minimo = numero;
        }

        // Sumar todos los números para calcular la media
        suma += numero;
    }

    // Calcular la media
    media = suma / n;

    cout << "El número más grande es: " << maximo << endl;
    cout << "El número más pequeño es: " << minimo << endl;
    cout << "La media de los números es: " << media << endl;

    return 0;
}
