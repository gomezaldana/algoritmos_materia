#include <iostream>
#include <vector>


void imprimirVector(const std::vector<int> &vector)
{
    std::cout << "[ ";
    for (int numero : vector)
    {
        std::cout << numero << " ";
    }
    std::cout << "]" << std::endl;
}


int productoVector(std::vector<int> vectorA, std::vector<int> vectorB)
{
    int suma = 0;
    for (int i = 0; i < vectorA.size(); i++)
    {
        int aux = vectorA[i];
        aux *= vectorB[i];
        suma += aux;
    }
    return suma;
}

std::vector<int> sumaVector(std::vector<int> vectorA, std::vector<int> vectorB)
{
    std::vector<int> suma = {};

    for (int i = 0; i < vectorA.size(); i++)
    {
        int aux = vectorA[i];
        aux += vectorB[i];
        suma.push_back(aux);
    }

    return suma;
}

void operacionesConVectores(std::vector<int> vectorA, std::vector<int> vectorB)
{
    std::vector<int> suma = sumaVector(vectorA, vectorB);
    int producto = productoVector(vectorA, vectorB);

    std::cout << "El producto escalar es " << producto << " y el vector suma es ";
    imprimirVector(suma);
}


int main()
{
  std::cout << "30) Dados dos vectores A y B, de N elementos cada uno, se desean calcular: a. El vector suma. b. El producto escalar. " << std::endl;

    operacionesConVectores({3, 4}, {1, 2});
   
    return 0;
}
