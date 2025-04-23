#include <iostream>


void imprimirYSumarNumeros()
{
    int suma = 0;
    int numero;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Por favor, ingrese un número : " << std::endl;
        std::cin >> numero;
        suma += numero;
        std::cout << "El número ingresado es : " << numero << " y la suma es " << suma;
    }
}

int main()
{
  
    std::cout << "15) Leer una serie de números reales, terminando la serie con un cero. Imprimir los datos a medida que se los ingresa junto con la suma parcial de los mismos. " << std::endl;

    imprimirYSumarNumeros();
    return 0;
}
