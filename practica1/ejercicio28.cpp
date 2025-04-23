#include <iostream>
#include <vector>


int maximoComunDivisor(int numero1, int numero2)
{
    int aux = numero2;

    while (numero2 != 0)
    {
        aux = numero2;
        numero2 = numero1 % numero2;
        numero1 = aux;
    }

    return numero1;
}

int minimoComunMultiplo(int numero1, int numero2)
{
    return abs(numero1 * numero2) / maximoComunDivisor(numero1, numero2);
}
void mcdYmcmEntreDosNumeros(int numero1, int numero2)
{
    int mcd = maximoComunDivisor(numero1, numero2);
    int mcm = minimoComunMultiplo(numero1, numero2);
    std::cout << "El máximo común divisor entre: " << numero1 << " y " << numero2 << " es: " << mcd << " y el minimo común múltiplo es: " << mcm << std::endl;
}


int main()
{
    std::cout << "28) Escribir una función que devuelva el máximo común divisor y el mínimo común múltiplo entre dos enteros. Nota: cuidado al modularizar (recordar que una función solo tiene que realizar una tarea).  " << std::endl;

    mcdYmcmEntreDosNumeros(10,12);
   
    return 0;
}
