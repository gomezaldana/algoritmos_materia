#include <iostream>
#include <vector>


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

int main()
{
    
    std::cout << "42) Definir un vector Gondola en donde puedan almacenar datos de a lo sumo 50 productos del supermercado. Cada producto se define por su nombre, código de barras, precio y un indicador si está en oferta o no (si estuviera en oferta al precio se le debe descontar un 10%). La aplicación debe permitir mediante un menú de opciones: a. Cargar productos en el vector. b. Buscar un producto indicando su nombre. c. Buscar un producto por código de barra. d. Poder modificar el precio de algún producto. e. Quitar un producto que esté en el vector. f. Indicar la cantidad de productos en oferta. g. Cargar productos de Gondola en un nuevo vector Chango, indicando luego: monto a abonar y ahorro total teniendo en cuenta los productos en oferta." << std::endl;

    gondola();

    return 0;
}


