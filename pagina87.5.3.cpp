Considerar el siguiente código de programa.
using namespace std;
int main(int argc, char *argv[])
{
int i = 1 , n ;
cin >> n;
while (i <= n)
if ((i % n) == 0)
++i;
cout << i << endl;
system("PAUSE");
return EXIT_SUCCESS;
}
a) ¿Cuál es la salida si se introduce como v alor de n, 0? a) Si se introduce el valor de 0 para n, el 
programa entrará en el bucle while y nunca encontrará una condición verdadera, ya que el resto decualqui
er número dividido por 0 es indefinido. Como resultado, el programa no imprimirá nada y esperará la entr
ada de más valores hasta que se detenga manualmente.
b) ¿Cuál es la salida si se introduce como v alor de n, 1? b) Si se introduce el valor de 1 para n, el 
programa entrará en el bucle while y la condición (i % n) == 0 se evaluará como verdadera, ya que cualqu
ier número dividido por 1 tiene resto 0. Entonces, la variable i se incrementará y será igual a 2. Luego, 
el programa imprimirá el valor de i (2) y terminará. Por lo tanto, la salida será:  2
c) ¿Cuál es la salida si se introduce como v alor de n, 3? c) Si se introduce el valor de 3 para n, el 
programa entrará en el bucle while y evaluará la condición (i % n) == 0 con i = 1. Como 1 no es divisible 
por 3, la condición será falsa y el programa no incrementará i. Luego, imprimirá el valor de i (1) y el
programa terminará. Por lo tanto, la salida será:  1