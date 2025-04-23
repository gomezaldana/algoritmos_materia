#include <iostream>


void operarConAyB()
{

    int numero1;
    int numero2;
    char operador;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero1;

    std::cout << "Por favor, ingrese otro número: ";
    std::cin >> numero2;

    std::cout << "Por favor, ingrese un '+' si quiere sumar, '-' si quiere restar, '*' si quiere multiplicar o '/' si quiere dividir los números ingresados ";
    std::cin >> operador;

    switch (operador)
    {
    case '+':
        std::cout << "La suma del número " << numero1 << " y del número " << numero2 << " es " << numero1 + numero2 << std::endl;
        break;
    case '-':
        std::cout << "La resta del número " << numero1 << " y del número " << numero2 << " es " << numero1 - numero2 << std::endl;
        break;
    case '*':
        std::cout << "La multiplicación del número " << numero1 << " y del número " << numero2 << " es " << numero1 * numero2 << std::endl;
        break;
    case '/':
        if (numero2 != 0)
            std::cout << "La división del número " << numero1 << " y del número " << numero2 << " es " << (numero1) / numero2 << std::endl;
        else
            std::cout << "No se puede dividir por cero." << std::endl;
        break;
    default:
        std::cout << "Operador no válido." << std::endl;
    }
}


int main()
{
    std::cout << "10) Leer dos números y luego una opción que puede ser ' + ': suma, ' – ': resta, ' * ': multiplicación o ' / ': división. Según la opción elegida realizar el cálculo. " << std::endl;

    operarConAyB();
    
    return 0;
}
