#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float radio, area, volumen;

    cout << "Introduce el radio de la esfera: ";
    cin >> radio;

    area = 4 * M_PI * pow(radio, 2);
    volumen = (4 * M_PI * pow(radio, 3)) / 3;

    cout << "El área de la esfera es: " << area << endl;
    cout << "El volumen de la esfera es: " << volumen << endl;

    return 0;
}
