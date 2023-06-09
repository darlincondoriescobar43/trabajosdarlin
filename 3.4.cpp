#include <iostream>
using namespace std;

int main() {
    const double G = 6.673e-8; // constante de gravitación
    double m1, m2, d, F; // masas, distancia y fuerza gravitacional

    // pedir datos al usuario
    cout << "Introduce la masa del cuerpo 1 en gramos: ";
    cin >> m1;
    cout << "Introduce la masa del cuerpo 2 en gramos: ";
    cin >> m2;
    cout << "Introduce la distancia entre los cuerpos en centímetros: ";
    cin >> d;

    // calcular fuerza gravitacional
    F = G * m1 * m2 / (d * d);

    // mostrar resultado en dinas
    cout << "La fuerza gravitacional entre los cuerpos es de " << F << " dinas." << endl;

    return 0;
}
