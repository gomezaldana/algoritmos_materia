#include <iostream>
#include <vector>
#include <algorithm>


void imprimirVector(const std::vector<int> &vector)
{
    std::cout << "[ ";
    for (int numero : vector)
    {
        std::cout << numero << " ";
    }
    std::cout << "]" << std::endl;
}


void definirOrdenVector(std::vector<int> numeros)
{
    std::vector<int> numerosOrdenadosAsc = numeros;
    std::sort(numerosOrdenadosAsc.begin(), numerosOrdenadosAsc.end());
    std::vector<int> numerosOrdenadosDesc = numeros;
    std::sort(numerosOrdenadosDesc.begin(), numerosOrdenadosDesc.end(), std::greater<int>());

    if (numeros == numerosOrdenadosAsc)
    {
        std::cout << "El vector esta ordenado de forma ascendente" << std::endl;
    }
    else if (numeros == numerosOrdenadosDesc)
    {
        std::cout << "El vector esta ordenado de forma descendente" << std::endl;
    }
    else
    {
        std::cout << "El vector esta desordenado" << std::endl;
    }

    imprimirVector(numeros);

}


int main()
{
  
   std::cout << "21) Escribir un algoritmo que lea una serie de números reales y verifique si están ordenados en forma ascendente, descendente o si no están ordenados, informando por pantalla. " << std::endl;

    definirOrdenVector({1, 2, 3, 4});
    definirOrdenVector({10, 9, 8, 7});
    definirOrdenVector({2, 1, 7, 3, 3});

    return 0;
}
