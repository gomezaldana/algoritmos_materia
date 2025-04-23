#include <iostream>


void mayorEntreAyB()
{
    int numero1;
    int numero2;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero1;

    std::cout << "Por favor, ingrese otro número: ";
    std::cin >> numero2;

    if (numero1 > numero2)
    {
        std::cout << numero1 << std::endl;
    }
    else
    {
        std::cout << numero2 << std::endl;
    }
}


int main()
{
    std::cout << "7) Leer dos números reales e imprimir el mayor de ellos. " << std::endl;
    mayorEntreAyB();
    
    return 0;
}
