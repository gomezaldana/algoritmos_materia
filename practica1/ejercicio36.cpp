#include <iostream>
#include <vector>


void vectorDeLaSumaDeMatriz()
{
    int MAX = 10;
    int m, n, matriz[MAX][MAX], sumaFilas[MAX];

    std::cout << "Ingrese cantidad de filas y columnas: ";
    std::cin >> m >> n;

    std::cout << "Ingrese la matriz: ";
    for (int i = 0; i < m; i++)
    {
        sumaFilas[i] = 0;
        for (int j = 0; j < n; j++)
        {
            std::cin >> matriz[i][j];
            sumaFilas[i] += matriz[i][j];
        }
    }

    std::cout << "Vector con suma de cada fila: ";
    for (int i = 0; i < m; i++)
    {
        std::cout << sumaFilas[i] << " ";
    }
    std::cout << std::endl;
}
int main()
{
    
std::cout << "36) Escribir un algoritmo que halle un vector cuyos elementos son la suma de los elementos de cada fila de una matriz previamente ingresada. " << std::endl;

    vectorDeLaSumaDeMatriz();

    return 0;
}


