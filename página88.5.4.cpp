#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Introduzca un valor no negativo: ";
        cin >> n;
    } while (n < 0);

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

    for (int i = 1; i <= 2; i++) {
        cout << "1";
        if (i == 2) {
            cout << " 2";
        }
        cout << endl;
    }

    cout << "1" << endl;

    return 0;
}
