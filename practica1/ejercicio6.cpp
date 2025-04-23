#include <iostream>


void evaluarCon0()
{
    int numero;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero;

    if (numero > 0)
    {
        std::cout << "El numero " << numero << " es mayor a 0";
    }
    else if (numero < 0)
    {
        std::cout << "El numero " << numero << " es menor a 0";
    }
    else
    {
        std::cout << "El numero que ingreso: " << numero << " es igual a 0";
    }
}
int main()
{
    std::cout << "6) Leer un número real y decir si es mayor, menor o igual a cero."  << std::endl;
    evaluarCon0();

    
    return 0;
}
