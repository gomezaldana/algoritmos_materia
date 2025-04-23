#include <iostream>
#include <vector>


void imprimirTresMayores()
{
    std::vector<int> numeros = {10, 30, 20, 10, 50, 40, 100, 90};
    int mayor1 = 0, mayor2 = 0, mayor3 = 0;

    for (int numero : numeros)
    {
        if (numero > mayor1)
        {
            mayor3 = mayor2;
            mayor2 = mayor1;
            mayor1 = numero;
        }
        else if (numero > mayor2)
        {
            mayor3 = mayor2;
            mayor2 = numero;
        }
        else if (numero > mayor3)
        {
            mayor3 = numero;
        }
    }

    std::cout << "Los tres mayores números son: ";
    std::cout << mayor1 << ", " << mayor2 << " y " << mayor3 << std::endl;

    // otra opcion seria ordenar de mayor a menor el vector y elegir los tres primeros numeros
}


int main()
{
  
    std::cout << "19) Dada una serie de números enteros terminada en cero, imprimir los tres mayores. " << std::endl;

    imprimirTresMayores();
    return 0;
}
