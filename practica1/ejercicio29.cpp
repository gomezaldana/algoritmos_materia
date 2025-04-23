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

bool esPrimoPorParametro(int numeroAVerificar)
{
    bool esPrimo = true;

    if (numeroAVerificar <= 1)
    {
        esPrimo = false;
    }
    else
    {
        for (int i = 2; i < numeroAVerificar && esPrimo; i++)
        {
            if (numeroAVerificar % i == 0)
            {
                esPrimo = false;
            }
        }
    }
    return esPrimo;
}

void vectorConPrimos()
{
    std::vector<int> primos = {};

    for (int i = 2; i < 201; i++)
    {
        if (esPrimoPorParametro(i))
        {
            primos.push_back(i);
        }
    }

    imprimirVector(primos);
}




int main()
{
    std:: cout << "29) Desarrollar una función que devuelva en un vector los números primos entre 2 y 200. Reutilizar lo que ya se escribió y probó. " << std:: endl;

    vectorConPrimos();
   
    return 0;
}
