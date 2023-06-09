#include <iostream>

using namespace std;

int main() {
    double cantidad;

    cout << "Ingrese la cantidad en euros: ";
    cin >> cantidad;

    int billetes500 = 0, billetes200 = 0, billetes100 = 0, billetes50 = 0, billetes20 = 0, billetes10 = 0, billetes5 = 0;
    int monedas2 = 0, monedas1 = 0, monedas50c = 0, monedas20c = 0, monedas10c = 0, monedas5c = 0, monedas2c = 0, monedas1c = 0;

    // Convertir a billetes
    if (cantidad >= 500) {
        billetes500 = cantidad / 500;
        cantidad -= billetes500 * 500;
    }
    if (cantidad >= 200) {
        billetes200 = cantidad / 200;
        cantidad -= billetes200 * 200;
    }
    if (cantidad >= 100) {
        billetes100 = cantidad / 100;
        cantidad -= billetes100 * 100;
    }
    if (cantidad >= 50) {
        billetes50 = cantidad / 50;
        cantidad -= billetes50 * 50;
    }
    if (cantidad >= 20) {
        billetes20 = cantidad / 20;
        cantidad -= billetes20 * 20;
    }
    if (cantidad >= 10) {
        billetes10 = cantidad / 10;
        cantidad -= billetes10 * 10;
    }
    if (cantidad >= 5) {
        billetes5 = cantidad / 5;
        cantidad -= billetes5 * 5;
    }

    // Convertir a monedas
    if (cantidad >= 2) {
        monedas2 = cantidad / 2;
        cantidad -= monedas2 * 2;
    }
    if (cantidad >= 1) {
        monedas1 = cantidad / 1;
        cantidad -= monedas1 * 1;
    }
    if (cantidad >= 0.5) {
        monedas50c = cantidad / 0.5;
        cantidad -= monedas50c * 0.5;
    }
    if (cantidad >= 0.2) {
        monedas20c = cantidad / 0.2;
        cantidad -= monedas20c * 0.2;
    }
    if (cantidad >= 0.1) {
        monedas10c = cantidad / 0.1;
        cantidad -= monedas10c * 0.1;
    }
    if (cantidad >= 0.05) {
        monedas5c = cantidad / 0.05;
        cantidad -= monedas5c * 0.05;
    }
    if (cantidad >= 0.02) {
        monedas2c = cantidad / 0.02;
        cantidad -= monedas2c * 0.02;
    }
    if (cantidad >= 0.01) {
        monedas1c = cantidad / 0.01;
        cantidad -= monedas1c * 0.01;
    }

    // Imprimir resultados
    cout << "Billetes de 500 euros: " << billetes500 << endl;
    cout << "Billetes de 200 euros: " << billetes200 << endl;
    cout << "Billetes de 100 euros: " << billetes100 << endl;
    cout << "Billetes de 50 euros: " << billetes50 << endl;
    cout << "Billetes de 20 euros: " << billetes20 << endl;
    cout << "Billetes de 10 euros: " << billetes10 << endl;
    cout << "Billetes de 5 euros: " << billetes5 << endl;
    cout << "Monedas de 2 euros: " << monedas2 << endl;
    cout << "Monedas de 1 euro: " << monedas1 << endl;
    cout << "Monedas de 50 céntimos: " << monedas50c << endl;
    cout << "Monedas de 20 céntimos: " << monedas20c << endl;
    cout << "Monedas de 10 céntimos: " << monedas10c << endl;
    cout << "Monedas de 5 céntimos: " << monedas5c << endl;
    cout << "Monedas de 2 céntimos: " << monedas2c << endl;
    cout << "Monedas de 1 céntimo: " << monedas1c << endl;

    return 0;
}
