#include <iostream>


void imprimir20NumerosDesdeEl_()
{
    int numero;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero;

    for (int i = numero; i < numero + 20; i++)
    {
        std::cout << i << std::endl;
    }
}

int main()
{
  
    std::cout << "13) Imprimir por pantalla una lista de 20 números consecutivos, los cuales comienzan con un número ingresado por teclado. " << std::endl;

    imprimir20NumerosDesdeEl_();
    return 0;
}
