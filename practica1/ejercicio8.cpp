#include <iostream>


void esPar()
{
    int numero;

    std::cout << "Por favor, ingrese un número para verificar si es par: ";
    std::cin >> numero;

    if (numero % 2 == 0)
    {
        std::cout << "El numero " << numero << " es par" << std::endl;
    }
    else
    {
        std::cout << "El numero " << numero << " es impar" << std::endl;
    }
}


int main()
{

    std::cout << "8) Escribir un algoritmo que determine si un número es par. " << std::endl;

    esPar();
    
    return 0;
}
