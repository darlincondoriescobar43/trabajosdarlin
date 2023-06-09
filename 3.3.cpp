#include<iostream>
using namespace std;

int main() {
   float a, b, c, d, e, f, x, y;

   cout << "Ingrese el valor de a: ";
   cin >> a;

   cout << "Ingrese el valor de b: ";
   cin >> b;

   cout << "Ingrese el valor de c: ";
   cin >> c;

   cout << "Ingrese el valor de d: ";
   cin >> d;

   cout << "Ingrese el valor de e: ";
   cin >> e;

   cout << "Ingrese el valor de f: ";
   cin >> f;

   if((a*d - b*c) == 0) {
      cout << "No se puede dividir por cero, la solución es imposible!" << endl;
      return 0;
   }

   x = (c*d - b*f) / (a*d - b*c);
   y = (a*f - c*e) / (a*d - b*c);

   cout << "La solución es x = " << x << " y y = " << y << endl;

   return 0;
}
