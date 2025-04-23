#include <iostream>

void saludarPersona()
{
    char nombrePersona;

    std::cout << "Por favor, ingrese su nombre: ";
    std::cin >> nombrePersona;

    std::cout << "Hola " << nombrePersona << std::endl;
}


int main()
{

    std::cout << "3) Escribir un programa que lea el nombre de una persona y luego lo salude. "    << std::endl;

    
    return 0;
}
