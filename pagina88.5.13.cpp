#include <iostream>
using namespace std;

int main() {
    int suma_cuadrados, cociente;

    for (int i = 100; i <= 999; i++) { // iterar a través de todos los números de tres cifras
        int digito1 = i / 100; // obtener el primer dígito
        int digito2 = (i / 10) % 10; // obtener el segundo dígito
        int digito3 = i % 10; // obtener el tercer dígito

        suma_cuadrados = digito1 * digito1 + digito2 * digito2 + digito3 * digito3; // calcular la suma de los cuadrados de los dígitos
        cociente = i / 3; // calcular el cociente

        if (suma_cuadrados == cociente) { // verificar si la suma de los cuadrados de los dígitos es igual al cociente
            cout << i << endl; // mostrar el número de tres cifras encontrado
        }
    }

    return 0;
}
