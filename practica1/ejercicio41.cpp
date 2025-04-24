#include <iostream>
#include <vector>

class Persona
{
private:
    std::string nombre;
    int telefono;

public:
    // constructor
    Persona(std::string _nombre, int _telefono)
    {
        nombre = _nombre;
        telefono = _telefono;
    }

    // constructor por defecto
    Persona()
    {
        nombre = "";
        telefono = 0;
    }

    void mostrar() const
    {
        std::cout << "Nombre: " << nombre << " - Teléfono: " << telefono << std::endl;
    }

    // getter
    std::string getNombre() const { return nombre; }
    int getTelefono() const { return telefono; }

    // setter
    void setNombre(std::string nuevoNombre) { nombre = nuevoNombre; }
    void setTelefono(int nuevoTelefono) { telefono = nuevoTelefono; }
};


void agregarPersonaEnAgenda(int &contactosCargados, Persona agenda[])
{
    Persona personaParaAgregar;
    std::string nombrePersona;
    int telefonoPersona;

    std::cout << "Por favor, ingrese el nombre del contacto que desea agregar: ";
    std::cin >> nombrePersona;
    std::cout << "Por favor, ingrese el número de teléfono del contacto que desea agregar: ";
    std::cin >> telefonoPersona;

    personaParaAgregar = Persona(nombrePersona, telefonoPersona);

    if (contactosCargados > 50)
    {
        std::cout << "No se puede agregar otro contacto, la agenda esta llena" << std::endl;
    }
    else
    {
        agenda[contactosCargados] = personaParaAgregar;
        std::cout << "Se cargo la persona ";
        personaParaAgregar.mostrar();
        std::cout << " a la agenda con exito" << std::endl;
        contactosCargados++;
    }
}

void buscarTelefonoPorNombre(Persona agenda[])
{
    std::string nombrePersonaABuscar;
    bool seEncontroPersona = false;
    int telefonoPersona;

    std::cout << "Por favor, ingrese el nombre del contacto al que desea obtener su numero de telefono: ";
    std::cin >> nombrePersonaABuscar;

    for (int i = 0; i < 50; i++)
    {
        if (agenda[i].getNombre() == nombrePersonaABuscar)
        {
            seEncontroPersona = true;
            telefonoPersona = agenda[i].getTelefono();
        }
    }

    if (seEncontroPersona)
    {
        std::cout << "El número de la persona que deseaba encontrar es: " << telefonoPersona << std::endl;
    }
    else
    {
        std::cout << "El nombre de la persona que ingresó no se encuentra en la agenda" << std::endl;
    }
}

void buscarNombrePorTelefono(Persona agenda[])
{
    std::string nombrePersonaAEncontrar;
    bool seEncontroPersona = false;
    int telefonoPersona;

    std::cout << "Por favor, ingrese el teléfono del contacto al que desea obtener su nombre: ";
    std::cin >> telefonoPersona;

    for (int i = 0; i < 50; i++)
    {
        if (agenda[i].getTelefono() == telefonoPersona)
        {
            seEncontroPersona = true;
            nombrePersonaAEncontrar = agenda[i].getNombre();
        }
    }

    if (seEncontroPersona)
    {
        std::cout << "El nombre de la persona que deseaba encontrar es: " << nombrePersonaAEncontrar << std::endl;
    }
    else
    {
        std::cout << "El número que ingresó no se encuentra en la agenda" << std::endl;
    }
}

void modificarTelefono(Persona agenda[])
{
    std::string nombrePersonaABuscar;
    bool seEncontroPersona = false;
    int telefonoNuevo;

    std::cout << "Por favor, ingrese el nombre del contacto al que desea modificar su numero de telefono: ";
    std::cin >> nombrePersonaABuscar;

    std::cout << "Por favor, ingrese el nuevo número de telefono: ";
    std::cin >> telefonoNuevo;

    for (int i = 0; i < 50; i++)
    {
        if (agenda[i].getNombre() == nombrePersonaABuscar)
        {
            seEncontroPersona = true;
            agenda[i].setTelefono(telefonoNuevo) ;
        }
    }

    if (seEncontroPersona)
    {
        std::cout << "El número de la persona se modificó con exito: " << std::endl;
    }
    else
    {
        std::cout << "El nombre de la persona que ingresó no se encuentra en la agenda" << std::endl;
    }
}

void eliminarContacto(Persona agenda[], int &cantidadContactos)
{
    std::string nombrePersonaABuscar;
    bool seEncontroPersona = false;

    std::cout << "Por favor, ingrese el nombre del contacto que quiere eliminar: ";
    std::cin >> nombrePersonaABuscar;

    for (int i = 0; i < 50; i++)
    {
        if (agenda[i].getNombre() == nombrePersonaABuscar)
        {
            seEncontroPersona = true;
            for (int j = i; j < 50 - 1; j++)
            {
                agenda[j] = agenda[j + 1];
            }
            std::cout << "Contacto eliminado.\n";
        }
    }

    if (seEncontroPersona)
    {
        std::cout << "La persona se eliminó de la agenda con exito: " << std::endl;
        cantidadContactos--;
    }
    else
    {
        std::cout << "La persona que ingresó no se encuentra en la agenda" << std::endl;
    }
}

void cargarAgenda(Persona agenda[], int &contactosCargados)
{
    agenda[0] = {"Juan", 1001};
    agenda[1] = {"Ana", 1002};
    agenda[2] = {"Luis", 1003};
    agenda[3] = {"Carla", 1004};
    agenda[4] = {"Pedro", 1005};
    agenda[5] = {"Laura", 1006};
    agenda[6] = {"Diego", 1007};
    agenda[7] = {"Sofía", 1008};
    agenda[8] = {"Martín", 1009};
    agenda[9] = {"Lucía", 1010};

    contactosCargados = 10;
    std::cout << "La agenda fue cargada con 10 contactos " << std::endl;
}

void agenda()
{
    char operacion;
    Persona agenda[50];
    int cantidadContactos = 0;
    bool aux = true;

    do
    {

        std::cout << "Por favor, ingrese una opción: " << "A) Cargar" << std::endl
                  << "B)Buscar un número de teléfono por nombre " << std::endl
                  << "C)Buscar el nombre de una persona indicando su teléfono" << std::endl
                  << "D)Modificar teléfono de persona" << std::endl
                  << "E)Agregar un contacto" << std::endl
                  << "F)Eliminar contacto" << std::endl
                  << "G)Salir" << std::endl;
        std::cin >> operacion;
        operacion = std::tolower(operacion);

        switch (operacion)
        {
        case 'a':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            cargarAgenda(agenda, cantidadContactos);
            break;
        case 'b':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            buscarTelefonoPorNombre(agenda);
            break;
        case 'c':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            buscarNombrePorTelefono(agenda);
            break;
        case 'd':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            modificarTelefono(agenda);
            break;
        case 'e':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            agregarPersonaEnAgenda(cantidadContactos, agenda);
            break;
        case 'f':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            eliminarContacto(agenda, cantidadContactos);
            break;
        case 'g':
            std::cout << "Saliendo del menu" << std::endl;
            aux = false;
            break;
        default:
            std::cout << "Operación no válida." << std::endl;
        }
    } while (aux);
}
int main()
{

    std::cout << "41) Definir un vector Agenda, en donde se pueda guardar los datos de, a lo sumo, 50 personas (definidas en el ej. anterior) y permita: a. Cargar los datos en la Agenda. b. Poder buscar el teléfono de una persona indicando su nombre. c. Poder buscar el nombre de una persona indicando su teléfono. d. Poder modificar el número de teléfono de alguna persona. e. Poder agregar un nuevo contacto. f. Poder dar de baja a un contacto. " << std::endl;

    agenda();

    return 0;
}
