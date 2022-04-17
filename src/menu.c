#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int menu () {

    int opcion;

    system("cls");
    printf("************************************************************\n");
    printf("                      Menu de opciones                      \n");
    printf("************************************************************\n");
    printf("1- Ingresar Kilometros.\n");
    printf("2- Ingresar precio de vuelos.\n");
    printf("3- Calcular todos los costos.\n");
    printf("4- Informar resultados.\n");
    printf("5- Carga forzada de datos.\n");
    printf("6- Salir.\n\n");

    printf("Ingrese una opcion...\n");
    scanf("%d",&opcion);
    system("cls");

    return opcion;
}


float kilometros() {

    float km;

    printf("************************************************************\n");
    printf("                         OPCION 1                           \n");
    printf("************************************************************\n\n");
    printf("Ingrese los kilometros...\n");
    scanf("%f",&km);

    while(km<1)
    {
        printf("ERROR! Ingrese km MAYORES a cero...\n");
        scanf("%f",&km);
    }

    return km;
}



void precio(float y,float z){

    printf("- Precio vuelo Aerolineas: %.2f\n",y);
    printf("- Precio vuelo Latam: %.2f\n",z);

}



float debito (float precio){

    float descuento;
    float debito;

    descuento=(precio*10)/100;
    debito=precio-descuento;

    return debito;
}



float credito (float precio){

    float interes;
    float credito;

    interes=(precio*25)/100;
    credito=precio+interes;

    return credito;
}



float bitcoin (float precio){

    float bitcoin;

    bitcoin=precio/4606954.55;

    return bitcoin;
}



float precioUnitario (float precio, float km){

    float precioUnitario;

    precioUnitario=precio/km;

    return precioUnitario;
}



float diferenciaPrecio (float y,float z){

    float diferenciaPrecio = z-y;

    return diferenciaPrecio;
}



void calcularCostos(float y, float z,float km)
{
    debito(y);
    credito(y);
    bitcoin(y);
    precioUnitario(y,km);

    debito(z);
    credito(z);
    bitcoin(z);
    precioUnitario(z,km);

    diferenciaPrecio(y,z);

    printf("************************************************************\n");
    printf("                         OPCION 3                           \n");
    printf("************************************************************\n\n");
    printf("Calculando los costos...\n");
}


void mostrarTodosLosCostos(float y, float z,float km){

    printf("KMs Ingresados: %.0f km.\n\n",km);

    printf("Precio Aerolineas: $ %.2f\n",y);
    printf("a) Precio con tarjeta de debito: $ %.2f\n",debito(y));
    printf("b) Precio con tarjeta de credito: $ %.2f\n",credito(y));
    printf("c) Precio pagando con Bitcoin: %.2f BTC\n",bitcoin(y));
    printf("d) Mostrar precio unitario: $ %.2f\n\n",precioUnitario(y,km));

    printf("Precio Latam: $ %.2f\n",z);
    printf("a) Precio con tarjeta de debito: $ %.2f\n",debito(z));
    printf("b) Precio con tarjeta de credito: $ %.2f\n",credito(z));
    printf("c) Precio pagando con Bitcoin: %.2f BTC\n",bitcoin(z));
    printf("d) Mostrar precio unitario: $ %.2f\n\n",precioUnitario(z,km));

    printf("La diferencia de precio es: $ %.2f\n\n",diferenciaPrecio(y,z));
}

void confirmarSalida(char* p){

    char confirma;

    printf ("Confirma salida? s = si | n = no \n\n");
    fflush(stdin);
    scanf("%c",&confirma);

    while (confirma!='s' && confirma!='n')
    {
        printf("ERROR INGRESANDO OPCION...\n");
        printf ("Confirma salida? s = si | n = no \n\n");
        fflush(stdin);
        scanf("%c",&confirma);
    }
    *p=confirma;
}
