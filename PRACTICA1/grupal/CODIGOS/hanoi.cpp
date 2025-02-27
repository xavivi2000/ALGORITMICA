/**
   @file Resoluci�n del problema de las Torres de Hanoi
*/

   
#include <iostream>
using namespace std;
#include <ctime>


/**
   @brief Resuelve el problema de las Torres de Hanoi
   @param M: n�mero de discos. M > 1.
   @param i: n�mero de columna en que est�n los discos.
             i es un valor de {1, 2, 3}. i != j.
   @param j: n�mero de columna a que se llevan los discos.
             j es un valor de {1, 2, 3}. j != i.

   Esta funci�n imprime en la salida est�ndar la secuencia de 
   movimientos necesarios para desplazar los M discos de la
   columna i a la j, observando la restricci�n de que ning�n
   disco se puede situar sobre otro de tama�o menor. Utiliza
   una �nica columna auxiliar.
*/
void hanoi (int M, int i, int j);




void hanoi (int M, int i, int j)
{
  if (M > 0)
    {
      hanoi(M-1, i, 6-i-j);
      hanoi (M-1, 6-i-j, j);
  }
}

int main(int argc, char **argv)
{

  clock_t tantes;    // Valor del reloj antes de la ejecuci�n
  clock_t tdespues;  // Valor del reloj despu�s de la ejecuci�n
  int M = atoi(argv[1]);
  
  tantes = clock();
  hanoi(M, 1, 2);
  tdespues = clock();
  cout << M << " "<<((double)(tdespues-tantes))/CLOCKS_PER_SEC << endl;

  return 0;
}
