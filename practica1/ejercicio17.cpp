#include <iostream>
#include <vector>


void cuantosXhay()
{
    std::vector<int> numeros = {1, 1, 4, 1, 2, 3, 4, 2, 100, 0, 1};
    int contador = 0;
    int numeroAcontar;

    std::cout << "Por favor ingrese el numero el cual quiere saber cuantas veces esta en el vector: ";
    std::cin >> numeroAcontar;

    for (int i = 0; i < numeros.size(); i++)
    {
        if (numeros[i] == numeroAcontar)
        {
            contador++;
        }
    }
    std::cout << "El número " << numeroAcontar << " aparece " << contador << " veces." << std::endl;
}

int main()
{
   std::cout << "17) Leer un valor N y luego N números enteros. Se pide imprimir el mayor y el menor y las veces que aparece cada uno. " << std::endl;

    cuantosXhay();
    
    return 0;
}
