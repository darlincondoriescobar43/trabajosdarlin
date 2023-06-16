#include <iostream>

using namespace std;

int main() {
    int ubicacion, cantidad;
    double precio, total;

    cout << "Seleccione la ubicación de las entradas:\n";
    cout << "1. General\n";
    cout << "2. Preferencial\n";
    cout << "3. Platea\n";
    cout << "4. VIP\n";
    cout << "Ingrese su opción: ";
    cin >> ubicacion;

    switch (ubicacion) {
        case 1:
            precio = 50.00;
            break;
        case 2:
            precio = 80.00;
            break;
        case 3:
            precio = 120.00;
            break;
        case 4:
            precio = 160.00;
            break;
        default:
            cout << "Opción inválida. Saliendo del programa.\n";
            return 0;
    }

    cout << "Ingrese la cantidad de entradas que desea comprar: ";
    cin >> cantidad;

    total = precio * cantidad;

    cout << "El total a pagar por " << cantidad << " entradas es: " << total << " euros.\n";

    if (ubicacion == 1 && cantidad > 8) {
        cout << "¡Felicidades! Por comprar más de 8 entradas generales, usted ha sido reconocido como Cliente Estrella.\n";
    }

    if (ubicacion == 4) {
        int opcion;
        cout << "Seleccione una bebida:\n";
        cout << "1. Gaseosa\n";
        cout << "2. Cerveza\n";
        cout << "3. Agua\n";
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ha seleccionado una gaseosa.\n";
                break;
            case 2:
                cout << "Ha seleccionado una cerveza.\n";
                break;
            case 3:
                cout << "Ha seleccionado agua.\n";
                break;
            default:
                cout << "Opción inválida. No se ha seleccionado ninguna bebida.\n";
        }
    }

    return 0;
}
