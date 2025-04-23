#include <iostream>


void operacionesConNum1yNum2()
{
    int numero1;
    int numero2;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero1;

    std::cout << "Por favor, ingrese otro número: ";
    std::cin >> numero2;

    int suma = numero1 + numero2;

    std::cout << "La suma de " << numero1 << " y del numero " << numero2 << " es: " << suma << std::endl;

    int resta = numero1 + numero2;

    std::cout << "La resta de " << numero1 << " y del numero " << numero2 << " es: " << resta << std::endl;

    int multiplicacion = numero1 * numero2;

    std::cout << "La multiplicacion de " << numero1 << " y del numero " << numero2 << " es: " << multiplicacion << std::endl;

    double division = numero1 / numero2;

    std::cout << "La division de " << numero1 << " y del numero " << numero2 << " es: " << division << std::endl;
}


int main()
{

    std::cout << "2) Leer dos números por teclado e imprimir: - La suma de ambos - La resta (el primero menos el segundo) - La multiplicación - La división " << std::endl;
    operacionesConNum1yNum2();

    return 0;
}
