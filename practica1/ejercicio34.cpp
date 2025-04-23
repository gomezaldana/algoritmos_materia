#include <iostream>
#include <math.h>

void especializacionDePolinomio()
{
    int MAX_GRADO = 10;
    int grado;
    double coeficientes[MAX_GRADO + 1];
    double x, resultado = 0;

    std::cout << "Ingrese el grado del polinomio (max 10): ";
    std::cin >> grado;

    std::cout << "Ingrese los coeficientes desde el término de grado 0 hasta grado " << grado << ":\n";
    for (int i = 0; i <= grado; i++)
    {
        std::cout << "Coeficiente de grado " << i << ": ";
        std::cin >> coeficientes[i];
    }

    std::cout << "Ingrese el valor de x: ";
    std::cin >> x;

    for (int i = 0; i <= grado; i++)
    {
        resultado += coeficientes[i] * pow(x, i);
    }

    std::cout << "Resultado del polinomio para x = " << x << " es: " << resultado << std::endl;
}

int main()
{

    std::cout << " 34) Si los números de un vector representan los coeficientes de un polinomio (de grado no mayor a 10), escribir un algoritmo que calcule la especialización de ese polinomio con un número que elige el usuario. " << std::endl;

    especializacionDePolinomio();

    return 0;
}
