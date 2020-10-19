#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char nombre[21];
    int infectados;
    int recuperados;
    int muertos;
}ePais;

void actualizarRecuperados(ePais* pais, int recuperadosDelDia)
{
    pais->recuperados =+ recuperadosDelDia;
}

void invertirCadena(char cadenaOriginal[], int largoCadenaOriginal)
{
    char cadenaInvertida[largoCadenaOriginal];
    int contador = 0;
    char aux;
    while(cadenaOriginal[contador] != '\0')
    {
        contador++;
    }

    for (int i = 0 ; i < contador; i++)
    {
        cadenaInvertida[i] = cadenaOriginal[contador - i - 1];
    }

    cadenaInvertida[contador] = '\0';

    strcpy(cadenaOriginal, cadenaInvertida);
}

void ordenarCaracteres(char vectorAOrdenar[],int largoVector)
{
   int i;
   int j;
   char aux;
   for (i = 0; i < largoVector-1; i++){

       for (j = 0; j < largoVector-i-1; j++)
       {
           if (vectorAOrdenar[j] > vectorAOrdenar[j+1])
           {
               aux = vectorAOrdenar[j];
               vectorAOrdenar[j] = vectorAOrdenar[i];
               vectorAOrdenar[i]= vectorAOrdenar[j];
           }
       }

   }
}

int main()
{
    ePais pais;
    actualizarRecuperados(&pais, 20);

    char prueba[20] = "Hola";
    invertirCadena(prueba, 20);
    printf("%s\n", prueba);
    system("pause");
}
