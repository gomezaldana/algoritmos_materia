#include <iostream>
#include <vector>


void imprimirVector(const std::vector<int> &vector)
{
    std::cout << "[ ";
    for (int numero : vector)
    {
        std::cout << numero << " ";
    }
    std::cout << "]" << std::endl;
}


bool esMayor(int a, int b)
{
    bool aux = false;
    if (a > b)
    {
        aux = true;
    }
    return aux;
}

bool esMenor(int a, int b)
{
    bool aux = false;
    if (a < b)
    {
        aux = true;
    }
    return aux;
}


void maximoYMinimoDeLista()
{
    std::vector<int> numerosReales;
    bool pedirNumeros = true;
    int numero;
    char aux;
    int maximo;
    int posMaximo;
    int minimo;
    int posMinimo;

    do
    {
        std::cout << "Por favor, ingrese un número para agregar a la lista: ";
        std::cin >> numero;
        numerosReales.push_back(numero);

        std::cout << "Ingrese 'S' si quiere ingresar otro número o 'N' si no lo desea : ";
        std::cin >> aux;

        if (aux == 'n' || aux == 'N')
        {
            pedirNumeros = false;
            imprimirVector(numerosReales);
        }

    } while (pedirNumeros);

    if (numerosReales.size() >= 2)
    {

        if (esMayor(numerosReales[0], numerosReales[1]))
        {
            maximo = numerosReales[0];
            posMaximo = 0;
            minimo = numerosReales[1];
            posMinimo = 1;
        }
        else
        {
            maximo = numerosReales[1];
            posMaximo = 1;
            minimo = numerosReales[0];
            posMinimo = 0;
        }
        if (numerosReales.size() > 2)
        {
            for (int i = 3; i < numerosReales.size(); i++)
            {

                if (esMayor(numerosReales[i], maximo))
                {
                    maximo = numerosReales[i];
                    posMaximo = i;
                }
                if (esMenor(numerosReales[i], minimo))
                {
                    minimo = numerosReales[i];
                    posMinimo = i;
                }
            }
        }
    }

    std::cout << "El numero mayor es " << maximo << " ubicado en la posición " << posMaximo << " y el minimo es " << minimo << " ubicado en la posicion " << posMinimo << std::endl;
}

int main()
{
  
    std::cout << "16) Dada una serie de números reales, determinar el valor máximo, el mínimo y las posiciones en que estos se encontraban en la serie. El programa deberá ir preguntando si hay más números para ingresar. " << std::endl;

    maximoYMinimoDeLista();

    return 0;
}
