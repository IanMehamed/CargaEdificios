#include <stdio.h>
#include <stdlib.h>
#include "libparcial.h"

void carga(propiedad edificio[],int cant);
int mayorgasto(propiedad edificio[],int cant);
void imprimirlista(propiedad edificio[],int cant);

void main()
{
    int N,mayor;
    printf("Bienvenido, ingrese por favor la cantidad de propiedades a cargar: ");
    scanf("%d",&N);
    propiedad edificio[N];
    carga(edificio,N);
    mayor=mayorgasto(edificio,N);
    printf("el edificio que mas gasto es el numero %d\n\n",edificio[mayor].numero);
    imprimirlista(edificio,N);
}

