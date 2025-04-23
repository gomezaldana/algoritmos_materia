#include <iostream>

void calcularPerimetroYSuperficieRectangulo()
{
    int base;
    int altura;
    int perimetro;
    int superficie;

    std::cout << "Por favor, ingrese la base del rectangulo: ";
    std::cin >> base;

    std::cout << "Por favor, ingrese la altura del rectangulo: ";
    std::cin >> altura;

    superficie = base * altura;
    perimetro = 2 * (base + altura);

    std::cout << "La superficie del rectangulo es " << superficie << " y el perimetro es " << perimetro << std::endl;
}

int main()
{

    std::cout <<"5) Leer la base y la altura de un rectángulo, calcular el perímetro y la superficie. Estructuras selectivas " << std::endl;
    calcularPerimetroYSuperficieRectangulo();
    
    return 0;
}
