#include <iostream>
#include <vector>


class Persona
{
private:
    std::string nombre;
    int salario;

public:
    // constructor
    Persona(std::string _nombre, int _salario)
    {
        nombre = _nombre;
        salario = _salario;
    }

    // constructor por defecto
    Persona()
    {
        nombre = "";
        salario = 0;
    }

    void mostrar() const
    {
        std::cout << "Nombre: " << nombre << " - Salario: " << salario << std::endl;
    }

    // getter
    std::string getNombre() const { return nombre; }
    int getSalario() const { return salario; }
};

void sueldoMaximoYMinimo()
{
    Persona p1("Aldana", 100);
    Persona p2("Micaela", 300);
    Persona p3("Francisco", 5300);
    Persona p4("Joaquin", 500);

    std::vector<Persona> trabajadores = {p1, p2, p3, p4};

    Persona personaSueldoMaximo = trabajadores[0];
    Persona personaSueldoMinimo = trabajadores[0];

    for (int i = 1; i < trabajadores.size(); i++)
    {
        if (trabajadores[i].getSalario() > personaSueldoMaximo.getSalario())
        {
            personaSueldoMaximo = trabajadores[i];
        }
        if (trabajadores[i].getSalario() < personaSueldoMinimo.getSalario())
        {
            personaSueldoMinimo = trabajadores[i];
        }
    }

    std::cout << "La persona con el salario más alto es: " << std::endl;
    personaSueldoMaximo.mostrar();

    std::cout << "La persona con el salario más bajo es: " << std::endl;
    personaSueldoMinimo.mostrar();
}


int main()
{
  
     std::cout << "20) Dada una serie de nombres con sus salarios respectivos, determinar el salario máximo, el mínimo y la persona que percibe cada uno. " << std::endl;

    sueldoMaximoYMinimo();
    return 0;
}
