
#include <iostream>

void imprimirNumeroPorPantalla()
{
    int numero;
    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero;
    
    // Imprimir el mensaje con el número ingresado
    std::cout << "Numero ingresado = " << numero << std::endl;
}

void operacionesConNum1yNum2()
{
    int numero1;
    int numero2;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero1;

    std::cout << "Por favor, ingrese otro número: ";
    std::cin >> numero2;

    int suma= numero1 + numero2;

    std::cout << "La suma de " << numero1 << " y del numero " << numero2 << " es: " << suma << std::endl;

    int resta= numero1 + numero2;

    std::cout << "La resta de " << numero1 << " y del numero " << numero2 << " es: " << resta << std::endl;

    int multiplicacion = numero1 * numero2;

    std::cout << "La multiplicacion de " << numero1 << " y del numero " << numero2 << " es: " << multiplicacion << std::endl;

    double division = numero1 / numero2;

    std::cout << "La division de " << numero1 << " y del numero " << numero2 << " es: " << division << std::endl;

}

void saludarPersona()
{
    char nombrePersona;

    std::cout << "Por favor, ingrese su nombre: ";
    std::cin >> nombrePersona; 

    std::cout << "Hola "<< nombrePersona << std::endl;

}

void superficieYVolumenDeRadio()
{
}

void calcularPerimetroYSuperficieRectangulo()
{
    int base;
    int altura;
    int perimetro;
    int superficie;

    std::cout << "Por favor, ingrese la base del rectangulo: ";
    std::cin >> base;

    std::cout << "Por favor, ingrese la altura del rectangulo: ";
    std::cin >> altura;

    superficie = base * altura;
    perimetro = 2 * (base + altura);

    std::cout << "La superficie del rectangulo es "<< superficie << " y el perimetro es " << perimetro << std::endl;


}

void evaluarCon0()
{
    int numero;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero;

    if (numero>0)
    {
        std::cout << "El numero "<< numero << " es mayor a 0";

    }
    else if(numero<0)
    {
        std::cout << "El numero "<< numero << " es menor a 0";

    }
    else
    {
        std::cout << "El numero que ingreso: "<< numero << " es igual a 0";

    }
}

void mayorEntreAyB()
{
    int numero1;
    int numero2;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero1;

    std::cout << "Por favor, ingrese otro número: ";
    std::cin >> numero2;

    if(numero1>numero2)
    {
        std::cout << numero1 << std::endl;

    }
    else
    {
        std::cout << numero2 << std::endl;

    }
}

void esPar()
{
    int numero;

    std::cout << "Por favor, ingrese un número para verificar si es par: ";
    std::cin >> numero;

    if(numero%2==0)
    {
        std::cout << "El numero " << numero << " es par" << std::endl;
    }
    else
    {
        std::cout << "El numero " << numero << " es impar" << std::endl;

    }
}


void aEsDivisiblePorB()
{
    int numero1;
    int numero2;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero1;

    std::cout << "Por favor, ingrese otro número para saber si puede dividir al número 1: ";
    std::cin >> numero2;

    if(numero1%numero2==0)
    {
        std::cout << "El numero " << numero1 << " es divisible por " << numero2 << std::endl;
    }
    else
    {
        std::cout << "El numero " << numero1 << " no es divisible por " << numero2 << std::endl;

    }

}





// ---------------------- main --------------------
int main()
{
/* 
    std::cout << "1) Leer un número por teclado e imprimirlo en pantalla con el siguiente cartel: Numero ingresado = numero. " << std::endl;
   
    imprimirNumeroPorPantalla(); */

    /* std::cout << "2) Leer dos números por teclado e imprimir: - La suma de ambos - La resta (el primero menos el segundo) - La multiplicación - La división " << std::endl;

    operacionesConNum1yNum2(); */

    /* std::cout << "3) Escribir un programa que lea el nombre de una persona y luego lo salude. "    << std::endl;

    saludarPersona(); */

    std::cout << "4) Dado el radio R de una esfera que se solicita por teclado, calcular e imprimir su superficie y su volumen. "    << std::endl;

    superficieYVolumenDeRadio();

    /* std::cout <<"5) Leer la base y la altura de un rectángulo, calcular el perímetro y la superficie. Estructuras selectivas " << std::endl;

    calcularPerimetroYSuperficieRectangulo(); */

    /* std::cout << "6) Leer un número real y decir si es mayor, menor o igual a cero."  << std::endl;

    evaluarCon0(); */

    /* std::cout << "7) Leer dos números reales e imprimir el mayor de ellos. " << std::endl;

    mayorEntreAyB(); */

    /* std::cout << "8) Escribir un algoritmo que determine si un número es par. " << std::endl;

    esPar(); */

    /* std::cout << "9) Escribir un algoritmo que determine si un número M es divisible por N. " << std::endl;

    aEsDivisiblePorB(); */
    
    
    std::cout << "10) Leer dos números y luego una opción que puede ser ' + ': suma, ' – ': resta, ' * ': multiplicación o ' / ': división. Según la opción elegida realizar el cálculo. " << std::endl;

    return 0;
}