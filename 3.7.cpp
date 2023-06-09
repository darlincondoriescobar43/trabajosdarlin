#include<iostream>
using namespace std;

int main() {
   int hectometros, decametros, metros, perimetro;

   cout << "Ingrese la longitud del perímetro del terreno en hectómetros, decámetros y metros (separados por espacios): ";
   cin >> hectometros >> decametros >> metros;

   // calcular el perímetro en decímetros
   perimetro = (hectometros * 10000) + (decametros * 100) + metros;
   
   cout << "El perímetro del terreno es " << perimetro << " decímetros." << endl;

   return 0;
}
