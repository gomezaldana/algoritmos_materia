
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cctype>

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
    double radio;
    std::cout << "Ingrese el radio de la esfera: ";
    std::cin >> radio;

    double superficie = 4 * M_PI * pow(radio, 2);
    double volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);

    std::cout << "Superficie de la esfera: " << superficie << std::endl;
    std::cout << "Volumen de la esfera: " << volumen << std::endl;
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

void especializacionDePolinomio()
{
    int MAX_GRADO = 10;
    int grado;
    double coeficientes[MAX_GRADO + 1];
    double x, resultado = 0;

    std::cout << "Ingrese el grado del polinomio (max 10): ";
    std::cin >> grado;

    std::cout << "Ingrese los coeficientes desde el término de grado 0 hasta grado " << grado << ":\n";
    for (int i = 0; i <= grado; i++)
    {
        std::cout << "Coeficiente de grado " << i << ": ";
        std::cin >> coeficientes[i];
    }

    std::cout << "Ingrese el valor de x: ";
    std::cin >> x;

    for (int i = 0; i <= grado; i++)
    {
        resultado += coeficientes[i] * pow(x, i);
    }

    std::cout << "Resultado del polinomio para x = " << x << " es: " << resultado << std::endl;
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

void raicesDeCuadratica()
{
    int a;
    int b;
    int c;
    int discriminante;
    bool tieneRaices = false;

    std::cout << "Por favor ingresar el primer coeficiente ";
    std::cin >> a;

    std::cout << "Por favor ingresar el segundo coeficiente ";
    std::cin >> b;

    std::cout << "Por favor ingresar el tercer coeficiente ";
    std::cin >> c;

    discriminante = calcularDiscriminante(a, b, c);

    if (discriminante > 0)
    {
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        std::cout << "Tiene dos raíces reales distintas: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }
    else if (discriminante == 0)
    {
        double x = -b / (2 * a);
        std::cout << "Tiene una raíz real doble: x = " << x << std::endl;
    }
    else
    {
        std::cout << "No tiene raíces reales." << std::endl;
    }
}

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

void sumaMatrizAYB()
{
    int MAX = 10;
    int m, n;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    std::cout << "Ingrese las dimensiones de las matrices (filas columnas): ";
    std::cin >> m >> n;

    std::cout << "Ingrese la matriz A:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            std::cin >> A[i][j];

    std::cout << "Ingrese la matriz B:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            std::cin >> B[i][j];

    std::cout << "Matriz C = A + B:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void mcdYmcmEntreDosNumeros(int numero1, int numero2)
{
    int mcd = maximoComunDivisor(numero1, numero2);
    int mcm = minimoComunMultiplo(numero1, numero2);
    std::cout << "El máximo común divisor entre: " << numero1 << " y " << numero2 << " es: " << mcd << " y el minimo común múltiplo es: " << mcm << std::endl;
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

void vectorCreadoConMinimos()
{
    int MAX = 2;
    int m, n, matriz[MAX][MAX], minimos[MAX];

    std::cout << "Ingrese filas y columnas: ";
    std::cin >> m >> n;

    std::cout << "Ingrese la matriz: ";
    for (int i = 0; i < m; i++)
    {
        std::cin >> matriz[i][0];
        minimos[i] = matriz[i][0];
        for (int j = 1; j < n; j++)
        {
            std::cin >> matriz[i][j];
            if (matriz[i][j] < minimos[i])
            {
                minimos[i] = matriz[i][j];
            }
        }
    }

    std::cout << "Vector con mínimos de cada fila:";
    for (int i = 0; i < m; i++)
    {
        std::cout << minimos[i] << " ";
    }
    std::cout << std::endl;
}

void interseccionYUnionDeDosVectores()
{
}

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

void trazaMatriz()
{
    int MAX = 10;
    int n, matriz[MAX][MAX], traza = 0;

    std::cout << "Ingrese tamaño de la matriz cuadrada: ";
    std::cin >> n;

    std::cout << "Ingrese la matriz:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        traza += matriz[i][i];
    }

    std::cout << "La traza de la matriz es: " << traza << std::endl;
}

void esMatrizIdentidadCuadrada()
{
    int MAX = 2;
    int n;
    bool esIdentidad = true;
    int matriz[MAX][MAX];

    std::cout << "Ingrese el tamaño de la matriz cuadrada: ";
    std::cin >> n;

    std::cout << "Ingrese la matriz:";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n && esIdentidad; i++)
    {
        for (int j = 0; j < n && esIdentidad; j++)
        {
            if ((i == j && matriz[i][j] != 1) || (i != j && matriz[i][j] != 0))
                esIdentidad = false;
        }
    }

    if (esIdentidad)
    {
        std::cout << "La matriz es identidad." << std::endl;
    }
    else
    {
        std::cout << "La matriz no es identidad." << std::endl;
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

void agregarPersonaEnAgenda(int &contactosCargados, Persona2 agenda[])
{
    Persona2 personaParaAgregar;
    std::string nombrePersona;
    int telefonoPersona;

    std::cout << "Por favor, ingrese el nombre del contacto que desea agregar: ";
    std::cin >> nombrePersona;
    std::cout << "Por favor, ingrese el número de teléfono del contacto que desea agregar: ";
    std::cin >> telefonoPersona;

    personaParaAgregar.nombre = nombrePersona;
    personaParaAgregar.telefono = telefonoPersona;

    if (contactosCargados > 50)
    {
        std::cout << "No se puede agregar otro contacto, la agenda esta llena" << std::endl;
    }
    else
    {
        agenda[contactosCargados] = personaParaAgregar;
        std::cout << "Se cargo la persona '" << personaParaAgregar.nombre << "' a la agenda con exito" << std::endl;
        contactosCargados++;
    }
}

void buscarTelefonoPorNombre(Persona2 agenda[])
{
    std::string nombrePersonaABuscar;
    bool seEncontroPersona = false;
    int telefonoPersona;

    std::cout << "Por favor, ingrese el nombre del contacto al que desea obtener su numero de telefono: ";
    std::cin >> nombrePersonaABuscar;

    for (int i = 0; i < 50; i++)
    {
        if (agenda[i].nombre == nombrePersonaABuscar)
        {
            seEncontroPersona = true;
            telefonoPersona = agenda[i].telefono;
        }
    }

    if (seEncontroPersona)
    {
        std::cout << "El número de la persona que deseaba encontrar es: " << telefonoPersona << std::endl;
    }
    else
    {
        std::cout << "El nombre de la persona que ingresó no se encuentra en la agenda" << std::endl;
    }
}

void buscarNombrePorTelefono(Persona2 agenda[])
{
    std::string nombrePersonaAEncontrar;
    bool seEncontroPersona = false;
    int telefonoPersona;

    std::cout << "Por favor, ingrese el teléfono del contacto al que desea obtener su nombre: ";
    std::cin >> telefonoPersona;

    for (int i = 0; i < 50; i++)
    {
        if (agenda[i].telefono == telefonoPersona)
        {
            seEncontroPersona = true;
            nombrePersonaAEncontrar = agenda[i].nombre;
        }
    }

    if (seEncontroPersona)
    {
        std::cout << "El nombre de la persona que deseaba encontrar es: " << nombrePersonaAEncontrar << std::endl;
    }
    else
    {
        std::cout << "El número que ingresó no se encuentra en la agenda" << std::endl;
    }
}

void modificarTelefono(Persona2 agenda[])
{
    std::string nombrePersonaABuscar;
    bool seEncontroPersona = false;
    int telefonoNuevo;

    std::cout << "Por favor, ingrese el nombre del contacto al que desea modificar su numero de telefono: ";
    std::cin >> nombrePersonaABuscar;

    std::cout << "Por favor, ingrese el nuevo número de telefono: ";
    std::cin >> telefonoNuevo;

    for (int i = 0; i < 50; i++)
    {
        if (agenda[i].nombre == nombrePersonaABuscar)
        {
            seEncontroPersona = true;
            agenda[i].telefono = telefonoNuevo;
        }
    }

    if (seEncontroPersona)
    {
        std::cout << "El número de la persona se modificó con exito: " << std::endl;
    }
    else
    {
        std::cout << "El nombre de la persona que ingresó no se encuentra en la agenda" << std::endl;
    }
}

void eliminarContacto(Persona2 agenda[], int &cantidadContactos)
{
    std::string nombrePersonaABuscar;
    bool seEncontroPersona = false;

    std::cout << "Por favor, ingrese el nombre del contacto que quiere eliminar: ";
    std::cin >> nombrePersonaABuscar;

    for (int i = 0; i < 50; i++)
    {
        if (agenda[i].nombre == nombrePersonaABuscar)
        {
            seEncontroPersona = true;
            for (int j = i; j < 50 - 1; j++)
            {
                agenda[j] = agenda[j + 1];
            }
            std::cout << "Contacto eliminado.\n";
        }
    }

    if (seEncontroPersona)
    {
        std::cout << "La persona se eliminó de la agenda con exito: " << std::endl;
        cantidadContactos--;
    }
    else
    {
        std::cout << "La persona que ingresó no se encuentra en la agenda" << std::endl;
    }
}

void cargarAgenda(Persona2 agenda[], int &contactosCargados)
{
    agenda[0] = {"Juan", 1001};
    agenda[1] = {"Ana", 1002};
    agenda[2] = {"Luis", 1003};
    agenda[3] = {"Carla", 1004};
    agenda[4] = {"Pedro", 1005};
    agenda[5] = {"Laura", 1006};
    agenda[6] = {"Diego", 1007};
    agenda[7] = {"Sofía", 1008};
    agenda[8] = {"Martín", 1009};
    agenda[9] = {"Lucía", 1010};

    contactosCargados = 10;
    std::cout << "La agenda fue cargada con 10 contactos " << std::endl;
}

void agenda()
{
    char operacion;
    Persona2 agenda[50];
    int cantidadContactos = 0;
    bool aux = true;

    do
    {

        std::cout << "Por favor, ingrese una opción: " << "A) Cargar" << std::endl
                  << "B)Buscar un número de teléfono por nombre " << std::endl
                  << "C)Buscar el nombre de una persona indicando su teléfono" << std::endl
                  << "D)Modificar teléfono de persona" << std::endl
                  << "E)Agregar un contacto" << std::endl
                  << "F)Eliminar contacto" << std::endl
                  << "G)Salir" << std::endl;
        std::cin >> operacion;
        operacion = std::tolower(operacion);

        switch (operacion)
        {
        case 'a':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            cargarAgenda(agenda, cantidadContactos);
            break;
        case 'b':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            buscarTelefonoPorNombre(agenda);
            break;
        case 'c':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            buscarNombrePorTelefono(agenda);
            break;
        case 'd':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            modificarTelefono(agenda);
            break;
        case 'e':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            agregarPersonaEnAgenda(cantidadContactos, agenda);
            break;
        case 'f':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            eliminarContacto(agenda, cantidadContactos);
            break;
        case 'g':
            std::cout << "Saliendo del menu" << std::endl;
            aux = false;
            break;
        default:
            std::cout << "Operación no válida." << std::endl;
        }
    } while (aux);
}

void vectorDeLaSumaDeMatriz()
{
    int MAX = 10;
    int m, n, matriz[MAX][MAX], sumaFilas[MAX];

    std::cout << "Ingrese cantidad de filas y columnas: ";
    std::cin >> m >> n;

    std::cout << "Ingrese la matriz: ";
    for (int i = 0; i < m; i++)
    {
        sumaFilas[i] = 0;
        for (int j = 0; j < n; j++)
        {
            std::cin >> matriz[i][j];
            sumaFilas[i] += matriz[i][j];
        }
    }

    std::cout << "Vector con suma de cada fila: ";
    for (int i = 0; i < m; i++)
    {
        std::cout << sumaFilas[i] << " ";
    }
    std::cout << std::endl;
}

void porcentajesNotasIngles()
{
    bool cargarAlumnos = true;
    int padron, nota;
    char opcion;
    int cantidadAlumnos = 0;
    int notas[11] = {};

    do
    {
        std::cout << "Ingrese el número de padrón del alumno: ";
        std::cin >> padron;

        std::cout << "Ingrese la nota del exámen del alumno (1 a 10): ";
        std::cin >> nota;

        if (nota < 1 || nota > 10)
        {
            std::cout << "Nota inválida. Debe estar entre 1 y 10." << std::endl;
        }

        std::cout << "[ alumno " << padron << " | nota -> " << nota << " ]" << std::endl;

        cantidadAlumnos++;
        notas[nota]++;

        std::cout << "¿Desea cargar otro alumno? Ingrese 's' para continuar: ";
        std::cin >> opcion;

        if (opcion != 's' && opcion != 'S')
        {
            cargarAlumnos = false;
        }

    } while (cargarAlumnos);

    std::cout << "\nCantidad total de alumnos: " << cantidadAlumnos << std::endl;

    for (int i = 1; i <= 10; i++)
    {
        if (notas[i] > 0)
        {
            double porcentaje = (notas[i] * 100.0) / cantidadAlumnos;
            std::cout << "Nota " << i << ": " << porcentaje << "% (" << notas[i] << " alumnos)" << std::endl;
        }
    }
}

struct Producto
{
    std::string nombre;
    int codigoBarras;
    double precio;
    bool estaEnOferta;

    double obtenerPrecioFinal() const
    {
        return estaEnOferta ? precio - (precio * 0.10) : precio;
    }
};

void agregarProducto(int &cantidadProductos, Producto gondola[], Producto productoParaAgregar)
{

    if (cantidadProductos < 50)
    {
        std::cout << "No se puede agregar otro producto" << std::endl;
    }
    else
    {
        gondola[cantidadProductos] = productoParaAgregar;
        std::cout << "Se cargo el producto :" <<" [ " << productoParaAgregar.nombre << " | " << productoParaAgregar.codigoBarras << " | $" << productoParaAgregar.precio << " | Estado oferta: " << productoParaAgregar.estaEnOferta << " ]" << std::endl;
        cantidadProductos++;
    }
}

int buscarProductoPorNombre(Producto gondola[], std::string nombreDeProductoABuscar,int cantidadProductos)
{
    for (int i = 0; i < cantidadProductos; i++)
    {
        if (gondola[i].nombre == nombreDeProductoABuscar)
        {
            return i;
        }
    }
    return -1;
}

void buscarProductoPorCodigoDeBarra(Producto gondola[],int cantidadProductos)
{

    int codigoDeBarrasIngresado;
    bool seEncontroProducto = false;
    Producto producto;

    std::cout << "Por favor, ingrese el codigo de barra del producto que desea buscar: ";
    std::cin >> codigoDeBarrasIngresado;

    for (int i = 0; i < cantidadProductos; i++)
    {
        if (gondola[i].codigoBarras == codigoDeBarrasIngresado)
        {
            seEncontroProducto = true;
            producto = gondola[i];
        }
    }

    if (seEncontroProducto)
    {
        std::cout << "El producto que deseaba encontrar es: [ " << producto.nombre << " | " << producto.codigoBarras << " | $" << producto.precio << " | Estado oferta: " << producto.estaEnOferta << " ]" << std::endl;
    }
    else
    {
        std::cout << "El producto que esta intentando buscar no se encuentra en la gondola" << std::endl;
    }
}

void modificarPrecioDeProducto(Producto gondola[],int cantidadProductos)
{
    std::string nombreProductoABuscar;
    bool seEncontroProducto = false;
    double precioNuevo;

    std::cout << "Por favor, ingrese el nombre del producto al que desea modificar su precio: ";
    std::cin >> nombreProductoABuscar;

    std::cout << "Por favor, ingrese el nuevo precio del producto: ";
    std::cin >> precioNuevo;

    for (int i = 0; i < cantidadProductos; i++)
    {
        if (gondola[i].nombre == nombreProductoABuscar)
        {
            seEncontroProducto = true;
            gondola[i].precio = precioNuevo;
        }
    }

    if (seEncontroProducto)
    {
        std::cout << "El precio del producto se modificó con exito: " << std::endl;
    }
    else
    {
        std::cout << "El nombre del producto que ingresó no se encuentra en la gondola" << std::endl;
    }
}

void quitarProducto(Producto gondola[], int &cantidadProductos)
{
    std::string nombreProductoABuscar;
    bool seEncontroProducto = false;

    std::cout << "Por favor, ingrese el nombre del producto que quiere eliminar: ";
    std::cin >> nombreProductoABuscar;

    for (int i = 0; i < cantidadProductos; i++)
    {
        if (gondola[i].nombre == nombreProductoABuscar)
        {
            seEncontroProducto = true;
            for (int j = i; j < cantidadProductos - 1; j++)
            {
                gondola[j] = gondola[j + 1];
            }
        }
    }

    if (seEncontroProducto)
    {
        std::cout << "El producto se eliminó de la gondola con éxito: " << std::endl;
        cantidadProductos--;
    }
    else
    {
        std::cout << "El producto que ingresó no se encuentra en la gondola" << std::endl;
    }
}

int cuantosProductosHayEnOferta(Producto gondola[], int &cantidadProductos)
{
    int cantidadProductosEnOferta = 0;

    for (int i = 0; i < cantidadProductos; i++)
    {
        if (gondola[i].estaEnOferta)
        {
            cantidadProductosEnOferta++;
        }
    }

    return cantidadProductosEnOferta;
}

void cargarProductosAlChango(Producto gondola[])
{
    char operacion;
    bool aux = true;
    Producto chango[50];
    int productosEnChango = 0;
    std::string nombreProductoACargar;
    int precioSinDescuento = 0;
    int precioConDescuento = 0;
    do
    {
        std::cout << "Si desea cargar un producto presione 's', de lo contrario presione 'n': " << std::endl;
        std::cin >> operacion;
        operacion = std::tolower(operacion);

        if (operacion == 's')
        {
            std::cout << "Ingrese el nombre del producto que quiere cargar al chango: " << std::endl;
            std::cin >> nombreProductoACargar;

            int posProductoParaAgregar = buscarProductoPorNombre(gondola, nombreProductoACargar,productosEnChango);
            if (posProductoParaAgregar > -2 && posProductoParaAgregar < 50)
            {
                agregarProducto(productosEnChango, chango,gondola[posProductoParaAgregar]);
            }
            else
            {
                std::cout << "No se pudo cargar el producto al chango: " << std::endl;
            }
        }
        else if (operacion == 'n')
        {
            aux = false;
            for (int i = 0; i < productosEnChango; i++)
            {
                precioConDescuento += chango[i].obtenerPrecioFinal();
                precioSinDescuento += chango[i].precio;
            }

            std::cout << "El precio total sin descuentos es: " << precioSinDescuento << std::endl;
            std::cout << "El precio total con descuentos es: " << precioConDescuento << std::endl;
            std::cout << "Ahorro en total: " << precioSinDescuento - precioConDescuento << std::endl;
        }
        else
        {
            std::cout << "Operación no válida." << std::endl;
        }

    } while (aux);
}

void gondola()
{
    char operacion;
    Producto gondola[50];
    int cantidadProductos = 0;
    bool aux = true;

    do
    {

        std::cout << "Por favor, ingrese una opción: " << std::endl
                  << "A) Cargar productos en el vector. " << std::endl
                  << "B) Buscar un producto indicando su nombre.  " << std::endl
                  << "C) Buscar un producto por código de barra. " << std::endl
                  << "D) Poder modificar el precio de algún producto." << std::endl
                  << "E) Quitar un producto que esté en el vector. " << std::endl
                  << "F) Indicar la cantidad de productos en oferta." << std::endl
                  << "G) Cargar productos de Gondola en un nuevo vector Chango, indicando luego: monto a abonar y ahorro total teniendo en cuenta los productos en oferta." << std::endl
                  << "H) Salir." << std::endl;
        std::cin >> operacion;
        operacion = std::tolower(operacion);

        switch (operacion)
        {
        case 'a':
        {
            std::cout << "La opción que usted eligió es " << operacion << std::endl;

            Producto productoParaAgregar;
            std::string nombreProducto;
            int precioProducto;
            int codigoBarrasProducto;
            bool estaEnOferta = false;
            char aux;

            std::cout << "Por favor, ingrese el nombre del producto que desea agregar: ";
            std::cin >> nombreProducto;
            std::cout << "Por favor, ingrese el precio del producto que desea agregar: ";
            std::cin >> precioProducto;
            std::cout << "Por favor, ingrese el código de barras del producto que desea agregar: ";
            std::cin >> codigoBarrasProducto;
            std::cout << "Indicar con una 's' si el producto esta de oferta, de lo contrario presione cualquier otra tecla: ";
            std::cin >> aux;

            aux = std::tolower(aux);

            if (aux == 's')
            {
                estaEnOferta = true;
            }

            productoParaAgregar.nombre = nombreProducto;
            productoParaAgregar.precio = precioProducto;
            productoParaAgregar.codigoBarras = codigoBarrasProducto;
            productoParaAgregar.estaEnOferta = estaEnOferta;

            agregarProducto(cantidadProductos, gondola, productoParaAgregar);
            break;
        }
        case 'b':
        {
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            std::string nombreDeProductoABuscar;
            std::cout << "Por favor, ingrese el nombre del producto que desea buscar: ";
            std::cin >> nombreDeProductoABuscar;
            int pos = buscarProductoPorNombre(gondola, nombreDeProductoABuscar,cantidadProductos);
            if (pos != -1)
            {
                std::cout << "Producto: " << gondola[pos].nombre << " | " << gondola[pos].precio << std::endl;
            }
            else
            {
                std::cout << "Producto no encontrado." << std::endl;
            }
            break;
        }
        case 'c':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            buscarProductoPorCodigoDeBarra(gondola,cantidadProductos);
            break;
        case 'd':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            modificarPrecioDeProducto(gondola, cantidadProductos);
            break;
        case 'e':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            quitarProducto(gondola, cantidadProductos);
            break;
        case 'f':
            std::cout << "La opción que usted eligió es " << operacion << std::endl;
            std::cout << "Los productos que estan en oferta son: " << cuantosProductosHayEnOferta(gondola, cantidadProductos) << std::endl;
            break;
        case 'g':
            std::cout << "Cargar productos al chango" << operacion << std::endl;
            cargarProductosAlChango(gondola);
            break;
        case 'h':
            std::cout << "Saliendo del menu" << std::endl;
            aux = false;
            break;
        default:
            std::cout << "Operación no válida." << std::endl;
        }
    } while (aux);
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

    /* std::cout << "4) Dado el radio R de una esfera que se solicita por teclado, calcular e imprimir su superficie y su volumen. " << std::endl;

    superficieYVolumenDeRadio(); */

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

    /* std::cout << "24) Hacer una función que, dado los coeficientes de un polinomio de segundo grado (3 números reales), indique si tiene o no raíces reales, devolviendo un valor booleano. " << std::endl;

    std::cout << std::boolalpha << elPolinomioTieneRaices() << std::endl; */

    /* std::cout << "25) Hacer una función que devuelva las raíces reales de un polinomio de segundo grado y además indique si tiene o no raíces reales. Nota: utilizar la función realizada en el ejercicio 39. Si no tuviera raíces reales, devolverá 0 en ambas. " << std::endl;

    raizDelPolinomio(); */

    /* std::cout << "26) Hacer un programa principal en donde se pida al usuario ingresar los coeficientes de la cuadrática, e indicar si tiene o no raíces, y cuáles son en caso de tener, utilizando la función definida. " << std::endl;

    raicesDeCuadratica(); */

    /* std::cout << "27) Hacer una función que indique si un número es primo o no.  " << std::endl;

    esPrimo(); */

    /* std::cout << "28) Escribir una función que devuelva el máximo común divisor y el mínimo común múltiplo entre dos enteros. Nota: cuidado al modularizar (recordar que una función solo tiene que realizar una tarea).  " << std::endl;

    mcdYmcmEntreDosNumeros(10,12); */

    // ------------------------------------ Vectores ----------------------------------------------------------------

    /* std:: cout << "29) Desarrollar una función que devuelva en un vector los números primos entre 2 y 200. Reutilizar lo que ya se escribió y probó. " << std:: endl;

    vectorConPrimos(); */

    /* std::cout << "30) Dados dos vectores A y B, de N elementos cada uno, se desean calcular: a. El vector suma. b. El producto escalar. " << std::endl;

    operacionesConVectores({3, 4}, {1, 2}); */

    /* std::cout << "31) Por cada alumno que rindió un examen de inglés se lee el número de padrón, y la nota obtenida. Se desea saber la cantidad de alumnos que rindieron el examen y el porcentaje de alumnos que obtuvieron cada nota. " << std::endl;

    porcentajesNotasIngles(); */

    /* std::cout << "32) Se carga un vector X de N elementos enteros. Escribir un algoritmo que devuelva un vector que tenga todos los elementos de X, pero sin elementos repetidos. " << std::endl;

    vectorSinRepetidos({1, 2, 2, 3, 4, 4, 5, 1}); */

    /* std::cout << " 34) Si los números de un vector representan los coeficientes de un polinomio (de grado no mayor a 10), escribir un algoritmo que calcule la especialización de ese polinomio con un número que elige el usuario. " << std::endl;

    especializacionDePolinomio(); */

    /* std::cout << "35) Escribir un algoritmo que halle una matriz C como suma de dos matrices A y B. La dimensión de las matrices de M × N se lee como dato (suponer un MAX para fila y columna). " << std::endl;

    sumaMatrizAYB(); */

    /* std::cout << "36) Escribir un algoritmo que halle un vector cuyos elementos son la suma de los elementos de cada fila de una matriz previamente ingresada. " << std::endl;

    vectorDeLaSumaDeMatriz(); */

    /* std::cout << "37) Escribir un programa que calcule la traza de una matriz cuadrada. Recordar que la traza de una matriz es la suma de los elementos de su diagonal principal. " << std::endl;

    trazaMatriz(); */

    /* std::cout << "38) Escribir un algoritmo que determine si una matriz cuadrada ingresada es la matriz identidad. Optimizar el código. " << std::endl;

    esMatrizIdentidadCuadrada(); */

    /* std::cout << "39) Escribir un algoritmo que construya un vector con los valores mínimos de cada una de las filas de una matriz. " << std::endl;

    vectorCreadoConMinimos(); */

    //-------------------------------------Registros y Tablas--------------------------------

    /* std::cout << "40) Definir un struct Persona, donde se pueda almacenar su nombre, y el número de teléfono. "<< std::endl;
    generarPersona(); */

    /* std::cout << "41) Definir un vector Agenda, en donde se pueda guardar los datos de, a lo sumo, 50 personas (definidas en el ej. anterior) y permita: a. Cargar los datos en la Agenda. b. Poder buscar el teléfono de una persona indicando su nombre. c. Poder buscar el nombre de una persona indicando su teléfono. d. Poder modificar el número de teléfono de alguna persona. e. Poder agregar un nuevo contacto. f. Poder dar de baja a un contacto. " << std::endl;

    agenda(); */

    std::cout << "42) Definir un vector Gondola en donde puedan almacenar datos de a lo sumo 50 productos del supermercado. Cada producto se define por su nombre, código de barras, precio y un indicador si está en oferta o no (si estuviera en oferta al precio se le debe descontar un 10%). La aplicación debe permitir mediante un menú de opciones: a. Cargar productos en el vector. b. Buscar un producto indicando su nombre. c. Buscar un producto por código de barra. d. Poder modificar el precio de algún producto. e. Quitar un producto que esté en el vector. f. Indicar la cantidad de productos en oferta. g. Cargar productos de Gondola en un nuevo vector Chango, indicando luego: monto a abonar y ahorro total teniendo en cuenta los productos en oferta." << std::endl;

    gondola();

    return 0;
}