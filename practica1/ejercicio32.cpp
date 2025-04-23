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


void vectorSinRepetidos(std::vector<int> vector)
{

    std::vector<int> sinRepetidos = {};
    int tamanioVector = vector.size();

    for (int i = 0; i < tamanioVector; i++)
    {
        bool estaEnElVector = false;

        for (int j = 0; j < sinRepetidos.size(); j++)
        {
            if (sinRepetidos[j] == vector[i])
            {
                estaEnElVector = true;
            }
        }

        if (!estaEnElVector)
        {
            sinRepetidos.push_back(vector[i]);
        }
    }

    imprimirVector(sinRepetidos);
}
int main()
{
 std::cout << "32) Se carga un vector X de N elementos enteros. Escribir un algoritmo que devuelva un vector que tenga todos los elementos de X, pero sin elementos repetidos. " << std::endl;

    vectorSinRepetidos({1, 2, 2, 3, 4, 4, 5, 1});
    return 0;
}


