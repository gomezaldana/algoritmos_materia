#include <iostream>


void menuDe4Opciones()
{

    char operador;

    std::cout << "Por favor, ingrese un '+' si quiere sumar, '-' si quiere restar, '*' si quiere multiplicar o '/' si quiere dividir los números ingresados ";
    std::cin >> operador;

    switch (operador)
    {
    case '+':
        std::cout << "La opción que usted eligió es " << operador << std::endl;
        break;
    case '-':
        std::cout << "La opción que usted eligió es " << operador << std::endl;
        break;
    case '*':
        std::cout << "La opción que usted eligió es " << operador << std::endl;
        break;
    case '/':
        std::cout << "La opción que usted eligió es " << operador << std::endl;
        break;
    default:
        std::cout << "Operador no válido." << std::endl;
    }
}

int main()
{
  
    std::cout << "11) Formar un menú de 4 opciones y, al elegir una de ellas, saldrá un cartel diciendo qué opción se eligió o si fue una opción incorrecta. " << std::endl;

    menuDe4Opciones();
    return 0;
}
