¿Cuál es la salida de este b ucle?
int i = 1 ;
while (i * i < 10)
{
int j = i;
while (j * j < 100)
{
cout << i + j << " ";
j *= 2;
}
i++;
cout << endl;
}
cout << "\n*****\n"; 

La salida del bucle sería:
2 3 4 5 4 6 8 10
3 4 5 6 5 7 9 11