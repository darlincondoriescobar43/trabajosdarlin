Suponiendo que m = 3 y n = 5 ¿Cuál es la salida de los siguientes se gmentos de programa?
a) for (int i = 0; i < n; i++)
{
for (int j = 0; j < i; j++)
cout << “ *”;
cout << endl;
}
a) Este segmento de programa imprime un triángulo de asteriscos, donde la base del triángulo es n. 
l bucle exterior se ejecutará n veces y el bucle interior se ejecutará i veces en cada iteración del 
bucle exterior. La variable i comienza en 0 y llega hasta n - 1 (es decir, 4), por lo que el número de
* en cada fila aumenta de 0 en la primera fila a 4 en la última fila. Por lo tanto, la salida será:

*
* *
* * *
* * * *
* * * * *
b) for (int i = n; i > 0; i--)
{
for (int j = m; j > 0; j--)
cout << “ * ”;
cout << endl;
}
b) Este segmento de programa imprime una matriz de asteriscos, donde el número de filas es n y el 
número de columnas es m. El bucle exterior se ejecutará n veces e imprimirá una fila de asteriscos 
cada vez. El bucle interior se ejecutará m veces e imprimirá un asterisco en cada columna. Como m = 3, 
el bucle interior imprimirá tres asteriscos en cada fila. Por lo tanto, la salida será:

* * *
* * *
* * *
* * *
* * *