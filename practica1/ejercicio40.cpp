#include <iostream>
#include <vector>
// creo persona con struct
struct Persona
{
    std::string nombre;
    int telefono;
};

Persona generarPersona()
{
    Persona persona;
    std::string nombre;
    int telefono;
    std::cout << "Por favor ingrese el nombre de la persona: ";
    std::cin >> nombre;
    std::cout << "Por favor ingrese el número telefónico de la persona: ";
    std::cin >> telefono;

    persona.telefono = telefono;
    persona.nombre = nombre;

    std::cout << "[ " << persona.nombre << " | Teléfono: " << persona.telefono << " ]" << std::endl;
    ;
    return persona;
}


int main()
{
    
    std::cout << "40) Definir un struct Persona, donde se pueda almacenar su nombre, y el número de teléfono. "<< std::endl;
    generarPersona();

    return 0;
}


