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


int main()
{
    std::cout << "24) Hacer una función que, dado los coeficientes de un polinomio de segundo grado (3 números reales), indique si tiene o no raíces reales, devolviendo un valor booleano. " << std::endl;

    std::cout << std::boolalpha << elPolinomioTieneRaices() << std::endl;
   
    return 0;
}
