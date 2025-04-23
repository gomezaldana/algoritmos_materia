#include <iostream>
void imprimirNumeroPorPantalla()
{
    int numero;
    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero;

    std::cout << "Numero ingresado = " << numero << std::endl;
}

int main()
{
    std::cout << "1) Leer un número por teclado e imprimirlo en pantalla con el siguiente cartel: Numero ingresado = numero. " << std::endl;
    imprimirNumeroPorPantalla();
    return 0;
}
