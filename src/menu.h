#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

/** \brief Muestra el menu y pide al usuario ingresar una opcion
 *
 * \param
 * \param
 * \return int retorna la opcion seleccionada
 *
 */

int menu ();

/** \brief Muestra los KM ingresador por el usuario
 *
 * \param
 * \param
 * \return float retorna los KM ingresados por el usuario
 *
 */

float kilometros();

/** \brief Almacena el precio de los vuelos
 *
 * \param y Ingrese vuelo Aerolineas
 * \param z Ingrese vuelo Latam
 * \return
 *
 */

void precio(float y,float z);

/** \brief Funcion para calcular el descuento pagando con debito
 *
 * \param float precio Ingrese el precio
 * \param
 * \return float Retorna el precio aplicando el descuento pagando con debito
 *
 */

float debito (float precio);

/** \brief Funcion para calcular el interes pagando con credito
 *
 * \param float precio Ingrese el precio
 * \param
 * \return float Retorna el precio aplicando el interes pagando con credito
 *
 */

float credito (float precio);

/** \brief Funcion para calcular el costo con el bitcoin
 *
 * \param float precio Ingrese el precio
 * \param
 * \return float Retorna el precio a abonar con bitcoin
 *
 */

float bitcoin (float precio);

/** \brief Funcion para calcular el precio por KM
 *
 * \param float Ingrese el precio
 * \param float Ingrese los KM
 * \return float Retorna el precio por KM
 *
 */

float precioUnitario (float precio, float km);

/** \brief Funcion para calcular la diferencia de precio entre aerolineas
 *
 * \param float precio Ingrese el precio de Aerolineas
 * \param float km Ingrese el precio de Latam
 * \return float Retorna la diferencia de precio
 *
 */

float diferenciaPrecio (float y,float z);

/** \brief Funcion para calcular costos totales
 *
 * \param float y Ingrese el precio de Aerolineas
 * \param float z Ingrese el precio de Latam
 * \param float km Ingrese los KM
 * \return
 *
 */

void calcularCostos(float y, float z ,float km);

/** \brief Funcion para calcular y mostrar costos totales
 *
 * \param float y Ingrese el precio de Aerolineas
 * \param float z Ingrese el precio de Latam
 * \param float km Ingrese los KM
 * \return
 *
 */

void mostrarTodosLosCostos(float y, float z,float km);

/** \brief funcion para confirmar salida del programa
 *
 * \param chat *p Ingrese opcion S - N
 * \param
 * \return
 *
 */

void confirmarSalida(char* p);

#endif // MENU_H_INCLUDED
