#include <iostream>
#include <vector>
#include <math.h>


int calcularDiscriminante(int a, int b, int c)
{
    int discriminante;
    discriminante = pow(b, 2) - (4 * a * c);
    return discriminante;
}


bool elPolinomioTieneRaices()
{
    int a;
    int b;
    int c;
    int discriminante;
    bool tieneRaiz = false;

    std::cout << "Por favor ingresar el primer valor del polinomio ";
    std::cin >> a;

    std::cout << "Por favor ingresar el segundo valor del polinomio ";
    std::cin >> b;

    std::cout << "Por favor ingresar el tercer valor del polinomio ";
    std::cin >> c;

    discriminante = calcularDiscriminante(a, b, c);
    if (discriminante >= 0)
    {
        tieneRaiz = true;
    }

    return tieneRaiz;
}

void raizDelPolinomio()
{
    int a;
    int b;
    int c;

    std::cout << "Por favor ingresar el primer valor del polinomio ";
    std::cin >> a;

    std::cout << "Por favor ingresar el segundo valor del polinomio ";
    std::cin >> b;

    std::cout << "Por favor ingresar el tercer valor del polinomio ";
    std::cin >> c;

    bool tieneRaiz = elPolinomioTieneRaices();

    std::cout << calcularDiscriminante(a, b, c) << std::endl;
    std::cout << std::boolalpha << tieneRaiz << std::endl;
}



int main()
{
    std::cout << "25) Hacer una función que devuelva las raíces reales de un polinomio de segundo grado y además indique si tiene o no raíces reales. Nota: utilizar la función realizada en el ejercicio 39. Si no tuviera raíces reales, devolverá 0 en ambas. " << std::endl;

    raizDelPolinomio();
   
    return 0;
}
