#include <iostream>


void pasarSegundosAFecha()
{
    const int minutosPorSegundo = 60;
    const int horasPorSegundo = 3600;
    const int diasPorSegundo = 86400;
    int segundos;
    int dias;
    int horas;
    int minutos;

    std::cout << "Por favor, ingrese los segundos: ";
    std::cin >> segundos;

    dias = segundos / diasPorSegundo;
    segundos = segundos % diasPorSegundo;

    horas = segundos / horasPorSegundo;
    segundos = segundos % horasPorSegundo;

    minutos = segundos / minutosPorSegundo;
    segundos = segundos % minutosPorSegundo;

    std::cout << "La fecha ingresada es: " << dias << ":" << horas << ":" << minutos << ":" << segundos << std::endl;
}

int main()
{
    std::cout << "12) Pasar un período expresado en segundos a un período expresado en días, horas, minutos y segundos. " << std::endl;

    pasarSegundosAFecha();
    
    return 0;
}
