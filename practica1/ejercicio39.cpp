#include <iostream>
#include <vector>


void vectorCreadoConMinimos()
{
    int MAX = 2;
    int m, n, matriz[MAX][MAX], minimos[MAX];

    std::cout << "Ingrese filas y columnas: ";
    std::cin >> m >> n;

    std::cout << "Ingrese la matriz: ";
    for (int i = 0; i < m; i++)
    {
        std::cin >> matriz[i][0];
        minimos[i] = matriz[i][0];
        for (int j = 1; j < n; j++)
        {
            std::cin >> matriz[i][j];
            if (matriz[i][j] < minimos[i])
            {
                minimos[i] = matriz[i][j];
            }
        }
    }

    std::cout << "Vector con mínimos de cada fila:";
    for (int i = 0; i < m; i++)
    {
        std::cout << minimos[i] << " ";
    }
    std::cout << std::endl;
}
int main()
{
     std::cout << "39) Escribir un algoritmo que construya un vector con los valores mínimos de cada una de las filas de una matriz. " << std::endl;

    vectorCreadoConMinimos();


    return 0;
}


