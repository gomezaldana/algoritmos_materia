
#include <vector>
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

    int suma = numero1 + numero2;

    std::cout << "La suma de " << numero1 << " y del numero " << numero2 << " es: " << suma << std::endl;

    int resta = numero1 + numero2;

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

    std::cout << "Hola " << nombrePersona << std::endl;
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

    std::cout << "La superficie del rectangulo es " << superficie << " y el perimetro es " << perimetro << std::endl;
}

void evaluarCon0()
{
    int numero;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero;

    if (numero > 0)
    {
        std::cout << "El numero " << numero << " es mayor a 0";
    }
    else if (numero < 0)
    {
        std::cout << "El numero " << numero << " es menor a 0";
    }
    else
    {
        std::cout << "El numero que ingreso: " << numero << " es igual a 0";
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

    if (numero1 > numero2)
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

    if (numero % 2 == 0)
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

    if (numero1 % numero2 == 0)
    {
        std::cout << "El numero " << numero1 << " es divisible por " << numero2 << std::endl;
    }
    else
    {
        std::cout << "El numero " << numero1 << " no es divisible por " << numero2 << std::endl;
    }
}

void operarConAyB()
{

    int numero1;
    int numero2;
    char operador;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero1;

    std::cout << "Por favor, ingrese otro número: ";
    std::cin >> numero2;

    std::cout << "Por favor, ingrese un '+' si quiere sumar, '-' si quiere restar, '*' si quiere multiplicar o '/' si quiere dividir los números ingresados ";
    std::cin >> operador;

    switch (operador)
    {
    case '+':
        std::cout << "La suma del número " << numero1 << " y del número " << numero2 << " es " << numero1 + numero2 << std::endl;
        break;
    case '-':
        std::cout << "La resta del número " << numero1 << " y del número " << numero2 << " es " << numero1 - numero2 << std::endl;
        break;
    case '*':
        std::cout << "La multiplicación del número " << numero1 << " y del número " << numero2 << " es " << numero1 * numero2 << std::endl;
        break;
    case '/':
        if (numero2 != 0)
            std::cout << "La división del número " << numero1 << " y del número " << numero2 << " es " << (numero1) / numero2 << std::endl;
        else
            std::cout << "No se puede dividir por cero." << std::endl;
        break;
    default:
        std::cout << "Operador no válido." << std::endl;
    }
}

void menuDe4Opciones()
{

    char operador;

    std::cout << "Por favor, ingrese un '+' si quiere sumar, '-' si quiere restar, '*' si quiere multiplicar o '/' si quiere dividir los números ingresados ";
    std::cin >> operador;

    switch (operador)
    {
    case '+':
        std::cout << "La opción que usted eligió es " << operador << std::endl;
        break;
    case '-':
        std::cout << "La opción que usted eligió es " << operador << std::endl;
        break;
    case '*':
        std::cout << "La opción que usted eligió es " << operador << std::endl;
        break;
    case '/':
        std::cout << "La opción que usted eligió es " << operador << std::endl;
        break;
    default:
        std::cout << "Operador no válido." << std::endl;
    }
}

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

void imprimir20NumerosDesdeEl_()
{
    int numero;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero;

    for (int i = numero; i < numero + 20; i++)
    {
        std::cout << i << std::endl;
    }
}

void factorialDe_()
{
    int numero;

    std::cout << "Por favor, ingrese un número para calcular su factorial: ";
    std::cin >> numero;

    int factorial = numero;

    for (int i = numero - 1; i > 0; i--)
    {
        factorial = factorial * i;
    }
    std::cout << "El fatorial de " << numero << " es " << factorial << std::endl;
}

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

void imprimirVector(const std::vector<int> &vector)
{
    std::cout << "Lista: ";
    for (int numero : vector)
    {
        std::cout << numero << " ";
    }
    std::cout << std::endl;
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

    if(numerosReales.size()>=2){

        if(esMayor(numerosReales[0],numerosReales[1])){
            maximo=numerosReales[0];
            posMaximo=0;
            minimo=numerosReales[1];
            posMinimo=1;
        }
        else
        {
            maximo=numerosReales[1];
            posMaximo=1;
            minimo=numerosReales[0];
            posMinimo=0;
        }
        if (numerosReales.size()>2)
        {
            for (int i = 3; i < numerosReales.size(); i++) {

                if(esMayor(numerosReales[i],maximo)){
                    maximo=numerosReales[i];
                    posMaximo=i;
                }
                if(esMenor(numerosReales[i],minimo)){
                    minimo=numerosReales[i];
                    posMinimo=i;
                }

              }
        }
        

    }

    std::cout << "El numero mayor es " << maximo << " ubicado en la posición " << posMaximo << " y el minimo es " << minimo << " ubicado en la posicion " << posMinimo << std::endl;
    
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

    std::cout << "4) Dado el radio R de una esfera que se solicita por teclado, calcular e imprimir su superficie y su volumen. " << std::endl;

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

    /* std::cout << "10) Leer dos números y luego una opción que puede ser ' + ': suma, ' – ': resta, ' * ': multiplicación o ' / ': división. Según la opción elegida realizar el cálculo. " << std::endl;

    operarConAyB(); */

    /* std::cout << "11) Formar un menú de 4 opciones y, al elegir una de ellas, saldrá un cartel diciendo qué opción se eligió o si fue una opción incorrecta. " << std::endl;

    menuDe4Opciones(); */

    /* std::cout << "12) Pasar un período expresado en segundos a un período expresado en días, horas, minutos y segundos. " << std::endl;

    pasarSegundosAFecha(); */

    /* ------------------------------------CICLOS--------------------------------------- */

    /* std::cout << "13) Imprimir por pantalla una lista de 20 números consecutivos, los cuales comienzan con un número ingresado por teclado. " << std::endl;

    imprimir20NumerosDesdeEl_();*/

    /* std::cout << "14) Leer un número N y calcular su factorial. " << std::endl;

    factorialDe_(); */

    /* std::cout << "15) Leer una serie de números reales, terminando la serie con un cero. Imprimir los datos a medida que se los ingresa junto con la suma parcial de los mismos. " << std::endl;

    imprimirYSumarNumeros(); */

    /* std::cout << "16) Dada una serie de números reales, determinar el valor máximo, el mínimo y las posiciones en que estos se encontraban en la serie. El programa deberá ir preguntando si hay más números para ingresar. " << std::endl;

    maximoYMinimoDeLista(); */

    std::cout << "17) Leer un valor N y luego N números enteros. Se pide imprimir el mayor y el menor y las veces que aparece cada uno. " << std::endl;






    return 0;
}