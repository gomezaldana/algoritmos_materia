#include <iostream>


void aEsDivisiblePorB()
{
    int numero1;
    int numero2;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero1;

    std::cout << "Por favor, ingrese otro número para saber si puede dividir al número 1: ";
    std::cin >> numero2;

    if (numero1 % numero2 == 0)
    {
        std::cout << "El numero " << numero1 << " es divisible por " << numero2 << std::endl;
    }
    else
    {
        std::cout << "El numero " << numero1 << " no es divisible por " << numero2 << std::endl;
    }
}


int main()
{
    std::cout << "9) Escribir un algoritmo que determine si un número M es divisible por N. " << std::endl;

    aEsDivisiblePorB();

    
    return 0;
}
