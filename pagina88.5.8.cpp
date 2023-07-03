#include <iostream>
#include <cmath>
using namespace std;

int main() {
    for (float x = 0; x <= 5; x += 0.5) {
        float resultado = cos(3*x) - 2*x;
        cout << "Cuando x es " << x << " el resultado es " << resultado << endl;
    }

    return 0;
}