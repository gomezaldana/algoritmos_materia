
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>

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

void aMultiplicadoPorB()
{
    int numero1;
    int numero2;
    int absolutoNumero2;
    int c;

    std::cout << "Por favor, ingrese un número: ";
    std::cin >> numero1;

    std::cout << "Por favor, ingrese otro número para poder multiplicarlo por " << numero1 << ": ";
    std::cin >> numero2;

    absolutoNumero2 = (numero2 < 0) ? -numero2 : numero2;

    for (int i = 0; i < absolutoNumero2; i++)
    {
        c += numero1;
    }

    if (numero2 < 0)
    {
        c = -c;
    }

    std::cout << "La multiplicación de los dos números da: " << c << std::endl;
}

void imprimirTresMayores()
{
    std::vector<int> numeros = {10, 30, 20, 10, 50, 40, 100, 90};
    int mayor1 = 0, mayor2 = 0, mayor3 = 0;

    for (int numero : numeros)
    {
        if (numero > mayor1)
        {
            mayor3 = mayor2;
            mayor2 = mayor1;
            mayor1 = numero;
        }
        else if (numero > mayor2)
        {
            mayor3 = mayor2;
            mayor2 = numero;
        }
        else if (numero > mayor3)
        {
            mayor3 = numero;
        }
    }

    std::cout << "Los tres mayores números son: ";
    std::cout << mayor1 << ", " << mayor2 << " y " << mayor3 << std::endl;

    // otra opcion seria ordenar de mayor a menor el vector y elegir los tres primeros numeros
}

// creo clase persona para el ejercicio 20

class Persona
{
private:
    std::string nombre;
    int salario;

public:
    // Constructor
    Persona(std::string _nombre, int _salario)
    {
        nombre = _nombre;
        salario = _salario;
    }

    // constructor por defecto
    Persona()
    {
        nombre = "";
        salario = 0;
    }

    // Mostrar datos
    void mostrar() const
    {
        std::cout << "Nombre: " << nombre << " - Salario: " << salario << std::endl;
    }

    /*
        de esta manera devuelvo la info, no imprimo directamente
        std::string toString() const {
        return "Nombre: " + nombre + " - Salario: " + std::to_string(salario);
}
    */

    // getter
    std::string getNombre() const { return nombre; }
    int getSalario() const { return salario; }
};

void sueldoMaximoYMinimo()
{
    Persona p1("Aldana", 100);
    Persona p2("Micaela", 300);
    Persona p3("Francisco", 5300);
    Persona p4("Joaquin", 500);

    std::vector<Persona> trabajadores = {p1, p2, p3, p4};

    Persona personaSueldoMaximo = trabajadores[0];
    Persona personaSueldoMinimo = trabajadores[0];

    for (int i = 1; i < trabajadores.size(); i++)
    {
        if (trabajadores[i].getSalario() > personaSueldoMaximo.getSalario())
        {
            personaSueldoMaximo = trabajadores[i];
        }
        if (trabajadores[i].getSalario() < personaSueldoMinimo.getSalario())
        {
            personaSueldoMinimo = trabajadores[i];
        }
    }

    std::cout << "La persona con el salario más alto es: " << std::endl;
    personaSueldoMaximo.mostrar();

    std::cout << "La persona con el salario más bajo es: " << std::endl;
    personaSueldoMinimo.mostrar();
}

void definirOrdenVector(std::vector<int> numeros)
{
    std::vector<int> numerosOrdenadosAsc = numeros;
    std::sort(numerosOrdenadosAsc.begin(), numerosOrdenadosAsc.end());
    std::vector<int> numerosOrdenadosDesc = numeros;
    std::sort(numerosOrdenadosDesc.begin(), numerosOrdenadosDesc.end(), std::greater<int>());

    if (numeros == numerosOrdenadosAsc)
    {
        std::cout << "El vector esta ordenado de forma ascendente" << std::endl;
    }
    else if (numeros == numerosOrdenadosDesc)
    {
        std::cout << "El vector esta ordenado de forma descendente" << std::endl;
    }
    else
    {
        std::cout << "El vector esta desordenado" << std::endl;
    }

    imprimirVector(numeros);

    // de esta forma puedo imprimir el bool
    // std::cout << std::boolalpha << (numeros == numerosOrdenadosDesc) << std::endl;
}

int calcularDiscriminante(int a, int b, int c)
{
    int discriminante;
    discriminante = pow(b, 2) - (4 * a * c);
    return discriminante;
}

bool elPolinomioTieneRaices()
{
    int a;
    int b;
    int c;
    int discriminante;
    bool tieneRaiz = false;

    std::cout << "Por favor ingresar el primer valor del polinomio ";
    std::cin >> a;

    std::cout << "Por favor ingresar el segundo valor del polinomio ";
    std::cin >> b;

    std::cout << "Por favor ingresar el tercer valor del polinomio ";
    std::cin >> c;

    discriminante = calcularDiscriminante(a, b, c);
    if (discriminante >= 0)
    {
        tieneRaiz = true;
    }

    return tieneRaiz;
}

void raizDelPolinomio()
{
    int a;
    int b;
    int c;

    std::cout << "Por favor ingresar el primer valor del polinomio ";
    std::cin >> a;

    std::cout << "Por favor ingresar el segundo valor del polinomio ";
    std::cin >> b;

    std::cout << "Por favor ingresar el tercer valor del polinomio ";
    std::cin >> c;

    bool tieneRaiz = elPolinomioTieneRaices();

    std::cout << calcularDiscriminante(a, b, c) << std::endl;
    std::cout << std::boolalpha << tieneRaiz << std::endl;
}

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

bool esPrimoPorParametro(int numeroAVerificar)
{
    bool esPrimo = true;

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
    return esPrimo;
}

void vectorConPrimos()
{
    std::vector<int> primos = {};

    for (int i = 2; i < 201; i++)
    {
        if (esPrimoPorParametro(i))
        {
            primos.push_back(i);
        }
    }

    imprimirVector(primos);
}

int productoVector(std::vector<int> vectorA, std::vector<int> vectorB)
{
    int suma = 0;
    for (int i = 0; i < vectorA.size(); i++)
    {
        int aux = vectorA[i];
        aux *= vectorB[i];
        suma += aux;
    }
    return suma;
}

std::vector<int> sumaVector(std::vector<int> vectorA, std::vector<int> vectorB)
{
    std::vector<int> suma = {};

    for (int i = 0; i < vectorA.size(); i++)
    {
        int aux = vectorA[i];
        aux += vectorB[i];
        suma.push_back(aux);
    }

    return suma;
}

void operacionesConVectores(std::vector<int> vectorA, std::vector<int> vectorB)
{
    std::vector<int> suma = sumaVector(vectorA, vectorB);
    int producto = productoVector(vectorA, vectorB);

    std::cout << "El producto escalar es " << producto << " y el vector suma es ";
    imprimirVector(suma);
}

void vectorSinRepetidos(std::vector<int> vector)
{

    std::vector<int> sinRepetidos = {};
    int tamanioVector = vector.size();

    for (int i = 0; i < tamanioVector; i++)
    {
        bool estaEnElVector = false;

        for (int j = 0; j < sinRepetidos.size(); j++)
        {
            if (sinRepetidos[j] == vector[i])
            {
                estaEnElVector = true;
            }
        }

        if (!estaEnElVector)
        {
            sinRepetidos.push_back(vector[i]);
        }
    }

    imprimirVector(sinRepetidos);
}

void interseccionYUnionDeDosVectores()
{
}

void tablaCelsiusFahrenheit()
{
    int fahrenheit= 0;
    double celsius= 0;

    std::cout << "celsius" << " | " << "fahrenheit" << std::endl;
    std::cout << "--------------------------" << std::endl;
    for (fahrenheit; fahrenheit < 200; fahrenheit+=10)
    {
        celsius = 5.0 / 9.0 * (fahrenheit - 32);
        std::cout << celsius << " | " <<fahrenheit << std::endl;

    }
    
}

// creo persona con struct
struct Persona2
{
    std::string nombre;
    int telefono;
};

Persona2 generarPersona()
{
    Persona2 persona;
    std::string nombre;
    int telefono;
    std::cout << "Por favor ingrese el nombre de la persona: ";
    std::cin >> nombre;
    std::cout << "Por favor ingrese el número telefónico de la persona: ";
    std::cin >> telefono;

    persona.telefono = telefono;
    persona.nombre = nombre;

    std::cout << "[ " << persona.nombre << " | Teléfono: " << persona.telefono << " ]" << std::endl;
    ;
    return persona;
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

    /* std::cout << "17) Leer un valor N y luego N números enteros. Se pide imprimir el mayor y el menor y las veces que aparece cada uno. " << std::endl;

    cuantosXhay();*/

    /* std::cout << "18) Leer A y B, enteros. Calcular C = A x B mediante sumas sucesivas e imprimir el resultado. " << std::endl;

    aMultiplicadoPorB(); */

    /* std::cout << "19) Dada una serie de números enteros terminada en cero, imprimir los tres mayores. " << std::endl;

    imprimirTresMayores(); */

    /* std::cout << "20) Dada una serie de nombres con sus salarios respectivos, determinar el salario máximo, el mínimo y la persona que percibe cada uno. " << std::endl;

    sueldoMaximoYMinimo(); */

    /* std::cout << "21) Escribir un algoritmo que lea una serie de números reales y verifique si están ordenados en forma ascendente, descendente o si no están ordenados, informando por pantalla. " << std::endl;

    definirOrdenVector({1, 2, 3, 4});
    definirOrdenVector({10, 9, 8, 7});
    definirOrdenVector({2, 1, 7, 3, 3}); */

    /* std::cout << "22) La relación entre temperaturas Celsius y Fahrenheit está dada por: C = 5/9 * (F – 32). Escribir un algoritmo que haga una tabla de valores Celsius-Fahrenheit, para valores entre OºF y 200ºF, a intervalos de 10º.  " << std::endl;

    tablaCelsiusFahrenheit(); */

    std::cout << "23) Leer N y luego N lotes de números reales que terminan con un valor 0, y calcular la media individual de cada lote, junto con la media total de todos los números ingresados. " << std::endl;

    /* std::cout << "24) Hacer una función que, dado los coeficientes de un polinomio de segundo grado (3 números reales), indique si tiene o no raíces reales, devolviendo un valor booleano. " << std::endl;

    std::cout << std::boolalpha << elPolinomioTieneRaices() << std::endl; */

    /* std::cout << "25) Hacer una función que devuelva las raíces reales de un polinomio de segundo grado y además indique si tiene o no raíces reales. Nota: utilizar la función realizada en el ejercicio 39. Si no tuviera raíces reales, devolverá 0 en ambas. " << std::endl;

    raizDelPolinomio(); */

    std::cout << "26) Hacer un programa principal en donde se pida al usuario ingresar los coeficientes de la cuadrática, e indicar si tiene o no raíces, y cuáles son en caso de tener, utilizando la función definida. " << std::endl;

    /* std::cout << "27) Hacer una función que indique si un número es primo o no.  " << std::endl;

    esPrimo(); */

    std::cout << "28) Escribir una función que devuelva el máximo común divisor y el mínimo común múltiplo entre dos enteros. Nota: cuidado al modularizar (recordar que una función solo tiene que realizar una tarea).  " << std::endl;

    // ------------------------------------ Vectores ----------------------------------------------------------------

    /* std:: cout << "29) Desarrollar una función que devuelva en un vector los números primos entre 2 y 200. Reutilizar lo que ya se escribió y probó. " << std:: endl;

    vectorConPrimos(); */

    /* std::cout << "30) Dados dos vectores A y B, de N elementos cada uno, se desean calcular: a. El vector suma. b. El producto escalar. " << std::endl;

    operacionesConVectores({3, 4}, {1, 2}); */

    std::cout << "31) Por cada alumno que rindió un examen de inglés se lee el número de padrón, y la nota obtenida. Se desea saber la cantidad de alumnos que rindieron el examen y el porcentaje de alumnos que obtuvieron cada nota. " << std::endl;

    /* std::cout << "32) Se carga un vector X de N elementos enteros. Escribir un algoritmo que devuelva un vector que tenga todos los elementos de X, pero sin elementos repetidos. " << std::endl;

    vectorSinRepetidos({1, 2, 2, 3, 4, 4, 5, 1}); */

    std::cout << "33) Se leen dos vectores A y B, de N y M elementos respectivamente. Construir un algoritmo que halle los vectores unión e intersección de A y B. Previamente habrá que ordenarlos. " << std::endl;

    interseccionYUnionDeDosVectores();

    std::cout << " 34) Si los números de un vector representan los coeficientes de un polinomio (de grado no mayor a 10), escribir un algoritmo que calcule la especialización de ese polinomio con un número que elige el usuario. " << std::endl;

    std::cout << "35) Escribir un algoritmo que halle una matriz C como suma de dos matrices A y B. La dimensión de las matrices de M × N se lee como dato (suponer un MAX para fila y columna). " << std::endl;
    std::cout << "36) Escribir un algoritmo que halle un vector cuyos elementos son la suma de los elementos de cada fila de una matriz previamente ingresada. " << std::endl;
    std::cout << "37) Escribir un programa que calcule la traza de una matriz cuadrada. Recordar que la traza de una matriz es la suma de los elementos de su diagonal principal. " << std::endl;
    std::cout << "38) Escribir un algoritmo que determine si una matriz cuadrada ingresada es la matriz identidad. Optimizar el código. " << std::endl;
    std::cout << "39) Escribir un algoritmo que construya un vector con los valores mínimos de cada una de las filas de una matriz. " << std::endl;

    //-------------------------------------Registros y Tablas--------------------------------

    /* std::cout << "40) Definir un struct Persona, donde se pueda almacenar su nombre, y el número de teléfono. "<< std::endl;
    generarPersona(); */

    std::cout << "41) Definir un vector Agenda, en donde se pueda guardar los datos de, a lo sumo, 50 personas (definidas en el ej. anterior) y permita: a. Cargar los datos en la Agenda. b. Poder buscar el teléfono de una persona indicando su nombre. c. Poder buscar el nombre de una persona indicando su teléfono. d. Poder modificar el número de teléfono de alguna persona. e. Poder agregar un nuevo contacto. f. Poder dar de baja a un contacto. " << std::endl;

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;

    return 0;
}