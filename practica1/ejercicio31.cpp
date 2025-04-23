#include <iostream>


void porcentajesNotasIngles()
{
    bool cargarAlumnos = true;
    int padron, nota;
    char opcion;
    int cantidadAlumnos = 0;
    int notas[11] = {};

    do
    {
        std::cout << "Ingrese el número de padrón del alumno: ";
        std::cin >> padron;

        std::cout << "Ingrese la nota del exámen del alumno (1 a 10): ";
        std::cin >> nota;

        if (nota < 1 || nota > 10)
        {
            std::cout << "Nota inválida. Debe estar entre 1 y 10." << std::endl;
        }

        std::cout << "[ alumno " << padron << " | nota -> " << nota << " ]" << std::endl;

        cantidadAlumnos++;
        notas[nota]++;

        std::cout << "¿Desea cargar otro alumno? Ingrese 's' para continuar: ";
        std::cin >> opcion;

        if (opcion != 's' && opcion != 'S')
        {
            cargarAlumnos = false;
        }

    } while (cargarAlumnos);

    std::cout << "\nCantidad total de alumnos: " << cantidadAlumnos << std::endl;

    for (int i = 1; i <= 10; i++)
    {
        if (notas[i] > 0)
        {
            double porcentaje = (notas[i] * 100.0) / cantidadAlumnos;
            std::cout << "Nota " << i << ": " << porcentaje << "% (" << notas[i] << " alumnos)" << std::endl;
        }
    }
}


int main()
{
 
   std::cout << "31) Por cada alumno que rindió un examen de inglés se lee el número de padrón, y la nota obtenida. Se desea saber la cantidad de alumnos que rindieron el examen y el porcentaje de alumnos que obtuvieron cada nota. " << std::endl;

    porcentajesNotasIngles();
    return 0;
}
