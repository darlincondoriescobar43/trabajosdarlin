#include <iostream>
using namespace std;

int main() {
    for(char letra = 'Z'; letra >= 'A'; letra--) // comienza en 'Z' y se decrementa hasta 'A'
    {
        for(char c = letra; c >= 'A'; c--) // imprime letra y decrementa hasta 'A'
        {
            cout << c;
        }
        cout << endl; // salto de línea al terminar la impresión de una línea de letras
    }
    return 0;
}
