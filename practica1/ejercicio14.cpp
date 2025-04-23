#include <iostream>


void factorialDe_()
{
    int numero;

    std::cout << "Por favor, ingrese un número para calcular su factorial: ";
    std::cin >> numero;

    int factorial = numero;

    for (int i = numero - 1; i > 0; i--)
    {
        factorial = factorial * i;
    }
    std::cout << "El fatorial de " << numero << " es " << factorial << std::endl;
}

int main()
{
   std::cout << "14) Leer un número N y calcular su factorial. " << std::endl;

    factorialDe_();
    
    return 0;
}
