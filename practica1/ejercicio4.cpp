#include <iostream>
#include <math.h>

void superficieYVolumenDeRadio()
{
    double radio;
    std::cout << "Ingrese el radio de la esfera: ";
    std::cin >> radio;

    double superficie = 4 * M_PI * pow(radio, 2);
    double volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);

    std::cout << "Superficie de la esfera: " << superficie << std::endl;
    std::cout << "Volumen de la esfera: " << volumen << std::endl;
}
int main()
{

    std::cout << "4) Dado el radio R de una esfera que se solicita por teclado, calcular e imprimir su superficie y su volumen. " << std::endl;
    superficieYVolumenDeRadio();
    
    return 0;
}
