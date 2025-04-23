#include <iostream>
#include <vector>

void esMatrizIdentidadCuadrada()
{
    int MAX = 2;
    int n;
    bool esIdentidad = true;
    int matriz[MAX][MAX];

    std::cout << "Ingrese el tamaño de la matriz cuadrada: ";
    std::cin >> n;

    std::cout << "Ingrese la matriz:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n && esIdentidad; i++)
    {
        for (int j = 0; j < n && esIdentidad; j++)
        {
            if ((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j] != 0))
                esIdentidad = false;
        }
    }

    if (esIdentidad)
    {
        std::cout << "La matriz es identidad." << std::endl;
    }
    else
    {
        std::cout << "La matriz no es identidad." << std::endl;
    }
}

int main()
{
    std::cout << "38) Escribir un algoritmo que determine si una matriz cuadrada ingresada es la matriz identidad. Optimizar el código. " << std::endl;

    esMatrizIdentidadCuadrada();


    return 0;
}


