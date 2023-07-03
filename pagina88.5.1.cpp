#include <iostream>
using namespace std;
 
int main() {
   int n, suma = 0;
   
   cout << "Ingrese un numero entero positivo: ";
   cin >> n;
   
   for (int i = 1; i <= n; ++i) {
      suma += i;
   }
   
   cout << "La suma de los " << n << " primeros numeros es: " << suma << endl;
   
   return 0;
}
