#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double masa, energia;
    const double c = 2.997925e10; // Velocidad de la luz en m/s

    cout << "Ingrese la masa en gramos: ";
    cin >> masa;

    energia = masa * pow(c, 3) / 1.0e9; // Conversión a ergios

    cout << "La energía producida es " << energia << " ergios." << endl;

    return 0;
}
