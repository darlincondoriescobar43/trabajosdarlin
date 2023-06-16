#include <iostream>

using namespace std;

int main() {
    int num, doble, triple;

    cout << "Ingrese un número entero: ";
    cin >> num;

    doble = num * 2;
    triple = num * 3;

    cout << "El doble del número ingresado es: " << doble << endl;
    cout << "El triple del número ingresado es: " << triple << endl;

    if (doble > 10) {
        num = num * num * num;
        cout << "El doble del número ingresado es mayor que 10. El número elevado al cubo es: " << num << endl;
    }

    if (triple < 4) {
        num = num * 2;
        cout << "El triple del número ingresado es menor que 4. El número duplicado es: " << num << endl;
    }

    return 0;
}
