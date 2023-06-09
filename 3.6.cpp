#include<iostream>
using namespace std;

int main() {
   float pies, yardas, pulgadas, centimetros, metros;
   cout<<"Ingresa la medida en pies: ";
   cin>>pies;

   yardas=pies/3;
   pulgadas=pies*12;
   centimetros=pulgadas*2.54;
   metros=centimetros/100;

   cout<<"La equivalencia en yardas es: "<<yardas<<endl;
   cout<<"La equivalencia en pulgadas es: "<<pulgadas<<endl;
   cout<<"La equivalencia en centimetros es: "<<centimetros<<endl;
   cout<<"La equivalencia en metros es: "<<metros<<endl;
   return 0;
}
