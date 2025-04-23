#include <iostream>
#include <vector>



bool esPrimo()
{
    int numeroAVerificar;
    bool esPrimo = true;

    std::cout << "Por favor ingresar el número que desea verificar si es primo: ";
    std::cin >> numeroAVerificar;

    if (numeroAVerificar <= 1)
    {
        esPrimo = false;
    }
    else
    {
        for (int i = 2; i < numeroAVerificar && esPrimo; i++)
        {
            if (numeroAVerificar % i == 0)
            {
                esPrimo = false;
            }
        }
    }

    if (esPrimo)
    {
        std::cout << "El número " << numeroAVerificar << " es primo." << std::endl;
        return esPrimo;
    }
    else
    {
        std::cout << "El número " << numeroAVerificar << " no es primo." << std::endl;
        return esPrimo;
    }
}


int main()
{
    std::cout << "27) Hacer una función que indique si un número es primo o no.  " << std::endl;

    esPrimo();
   
    return 0;
}
