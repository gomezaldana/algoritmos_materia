#include <iostream>
#include <vector>


void trazaMatriz()
{
    int MAX = 10;
    int n, matriz[MAX][MAX], traza = 0;

    std::cout << "Ingrese tamaño de la matriz cuadrada: ";
    std::cin >> n;

    std::cout << "Ingrese la matriz:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        traza += matriz[i][i];
    }

    std::cout << "La traza de la matriz es: " << traza << std::endl;
}
int main()
{
    
    std::cout << "37) Escribir un programa que calcule la traza de una matriz cuadrada. Recordar que la traza de una matriz es la suma de los elementos de su diagonal principal. " << std::endl;

    trazaMatriz();

    return 0;
}


