
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main()
{
	setbuf(stdout, NULL);

    char salir='n';
    float km;
    float aerolineas;
    float latam;
    int flagUno=1;
    int flagDos=1;
    int flagTres=1;

    do
    {
        switch(menu())
        {
        case 1:
            km=kilometros();
            flagUno=0;
            break;
        case 2:
            printf("************************************************************\n");
            printf("                           OPCION 2                         \n");
            printf("************************************************************\n\n");
            if(flagUno==0)
            {
                if(flagDos)
                {
                    printf("Ingresar Precio de vuelo en Aerolineas:\n");
                    scanf("%f",&aerolineas);

                    while(aerolineas<1)
                    {
                        printf("ERROR! Ingrese un precio MAYOR a cero...\n");
                        scanf("%f",&aerolineas);
                    }

                    printf("Ingresar Precio de vuelo en Latam:\n");
                    scanf("%f",&latam);

                    while(latam<1)
                    {
                        printf("ERROR! Ingrese un precio MAYOR a cero...\n");
                        scanf("%f",&latam);
                    }

                    flagDos=0;
                }
                else
                {
                    precio(aerolineas,latam);
                }
            }
            else
            {
                printf("ERROR! Ingrese primero la opcion: 1\n");
            }
            break;
        case 3:
            if(flagDos==0)
            {
                calcularCostos(aerolineas,latam,km);
                flagTres=0;
            }
            else
            {
                printf("ERROR! Ingrese primero la opcion: 2\n");
            }
            break;
        case 4:
            if(flagTres==0)
            {
                printf("************************************************************\n");
                printf("                        OPCION 4                            \n");
                printf("************************************************************\n\n");
                mostrarTodosLosCostos(aerolineas,latam,km);
            }
            else
            {
                printf("ERROR! Ingrese primero la opcion: 3\n");
            }
            break;
        case 5:
            printf("************************************************************\n");
            printf("                        OPCION 5                            \n");
            printf("************************************************************\n\n");
            mostrarTodosLosCostos(162965,159339,7090);
            break;
        case 6:
            confirmarSalida(&salir);
            break;
        default:
            printf("OPCION INCORRECTA, Elija una opcion del menu\n");
        }
        fflush(stdin);
        system ("pause");

    }
    while(salir != 's');

    return EXIT_SUCCESS;
}
