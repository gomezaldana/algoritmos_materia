#include <iostream>
#include <vector>



void tablaCelsiusFahrenheit()
{
    int fahrenheit = 0;
    double celsius = 0;

    std::cout << "celsius" << " | " << "fahrenheit" << std::endl;
    std::cout << "--------------------------" << std::endl;
    for (fahrenheit; fahrenheit < 200; fahrenheit += 10)
    {
        celsius = 5.0 / 9.0 * (fahrenheit - 32);
        std::cout << celsius << " | " << fahrenheit << std::endl;
    }
}


int main()
{
    std::cout << "22) La relación entre temperaturas Celsius y Fahrenheit está dada por: C = 5/9 * (F – 32). Escribir un algoritmo que haga una tabla de valores Celsius-Fahrenheit, para valores entre OºF y 200ºF, a intervalos de 10º.  " << std::endl;

    tablaCelsiusFahrenheit();
   
    return 0;
}
