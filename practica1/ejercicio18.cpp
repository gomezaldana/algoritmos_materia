#include <iostream>

void aMultiplicadoPorB()
{
    int numero1;
    int numero2;
    int absolutoNumero2;
    int c;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero1;

    std::cout << "Por favor, ingrese otro número para poder multiplicarlo por " << numero1 << ": ";
    std::cin >> numero2;

    absolutoNumero2 = (numero2 < 0) ? -numero2 : numero2;

    for (int i = 0; i < absolutoNumero2; i++)
    {
        c += numero1;
    }

    if (numero2 < 0)
    {
        c = -c;
    }

    std::cout << "La multiplicación de los dos números da: " << c << std::endl;
}

int main()
{
  std::cout << "18) Leer A y B, enteros. Calcular C = A x B mediante sumas sucesivas e imprimir el resultado. " << std::endl;

    aMultiplicadoPorB();
    
    return 0;
}
