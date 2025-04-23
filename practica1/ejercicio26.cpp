#include <iostream>
#include <vector>
#include <math.h>

int calcularDiscriminante(int a, int b, int c)
{
    int discriminante;
    discriminante = pow(b, 2) - (4 * a * c);
    return discriminante;
}

void raicesDeCuadratica()
{
    int a;
    int b;
    int c;
    int discriminante;
    bool tieneRaices = false;

    std::cout << "Por favor ingresar el primer coeficiente ";
    std::cin >> a;

    std::cout << "Por favor ingresar el segundo coeficiente ";
    std::cin >> b;

    std::cout << "Por favor ingresar el tercer coeficiente ";
    std::cin >> c;

    discriminante = calcularDiscriminante(a, b, c);

    if (discriminante > 0)
    {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        std::cout << "Tiene dos raíces reales distintas: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }
    else if (discriminante == 0)
    {
        double x = -b / (2 * a);
        std::cout << "Tiene una raíz real doble: x = " << x << std::endl;
    }
    else
    {
        std::cout << "No tiene raíces reales." << std::endl;
    }
}



int main()
{
  
   std::cout << "26) Hacer un programa principal en donde se pida al usuario ingresar los coeficientes de la cuadrática, e indicar si tiene o no raíces, y cuáles son en caso de tener, utilizando la función definida. " << std::endl;

    raicesDeCuadratica();
    return 0;
}
