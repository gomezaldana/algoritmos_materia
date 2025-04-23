#include <iostream>
#include <vector>


void sumaMatrizAYB()
{
    int MAX = 10;
    int m, n;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    std::cout << "Ingrese las dimensiones de las matrices (filas columnas): ";
    std::cin >> m >> n;

    std::cout << "Ingrese la matriz A:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            std::cin >> A[i][j];

    std::cout << "Ingrese la matriz B:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            std::cin >> B[i][j];

    std::cout << "Matriz C = A + B:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
int main()
{
    
std::cout << "35) Escribir un algoritmo que halle una matriz C como suma de dos matrices A y B. La dimensión de las matrices de M × N se lee como dato (suponer un MAX para fila y columna). " << std::endl;

    sumaMatrizAYB();

    return 0;
}


