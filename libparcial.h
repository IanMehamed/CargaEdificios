typedef struct chico{
    int mes;
    int anio;
    }fecha;

typedef struct chico2{
    char concepto[5][20];
    float importe[5];
    }gastos;

typedef struct grande{
    int numero;
    char apellido[15];
    int piso;
    char depto;
    fecha fec;
    gastos gast;
    }propiedad;


void carga(propiedad edificio[],int cant){
    int i,a,b=16,c;
    char dep="F";
    for (i=0;i<cant;i++){
            printf("Ingrese el nro del departamento numero %d: ",i+1);
            scanf("%d",&edificio[i].numero);
            printf("Ingrese el apellido del propietario: ");
            scanf("%s",&edificio[i].apellido);
            while ((b<0) || (b>15)){
                printf("Ingrese el piso: ");
                scanf("%d",&b);
                if (b<1){
                    printf("Debe ingresar un número entre 1 y 15\n");
                    }
                if (b>15){
                    printf("Debe ingresar un número entre 1 y 15\n");
                    }
                }
            edificio[i].piso=b;
            while ((dep!='A')&&(dep!='B')&&(dep!='C')&&(dep!='D')&&(dep!='E')){
                printf("Ingrese en Mayuscula, el Depto: ");
                scanf("%s",&dep);
                if ((dep!='A')&&(dep!='B')&&(dep!='C')&&(dep!='D')&&(dep!='E')){
                    printf("Debe ingresar una de las siguientes opciones: A/B/C/D/E...\n");
                    }
                }
            edificio[i].depto=dep;
            printf("Cuantos gastos extraordinarios tuvo?(maximo 5, no gaste mucho por favor): ");
            scanf("%d",&b);
            for(c=0;c<b;c++){
                printf("Ingrese el concepto del gasto numero %d:",c+1);
                scanf("%s",&edificio[i].gast.concepto[c]);
                printf("Ingrese el importe de dicho gasto: ");
                scanf("%f",&edificio[i].gast.importe[c]);
                }
            printf("Ingrese el mes (con numeros, ejemplo: 09 para septiembre) por favor: ");
            scanf("%d",&edificio[i].fec.mes);
            printf("Ingrese el año: ");
            scanf("%d",&edificio[i].fec.anio);
        }
    }


int mayorgasto(propiedad edificio[],int cant){
    float sumas[cant];
    float sumaparcial=0;
    int i,a,posicion,mayor=0;
    for(i=0;i<cant;i++){
        for(a=0;a<5;a++){
            sumaparcial=sumaparcial+edificio[i].gast.importe[a];
            }
        sumas[i]=sumaparcial;
        }
    for (i=0;i<cant;i++){
        if (sumas[i]>sumas[mayor]){
            mayor=i;
            }
        }
    return mayor;
    }

void imprimirlista(propiedad edificio[],int cant){
    int i;
    printf("Lista de propiedades\n----------------------------------------------------\n\n");
    printf("Apellido\t\tPiso\tDepto\tFecha\tconcepto\timporte\n");
    for(i=0;i<cant;i++){
        printf("%s\t\t\t%d\t%c\t%d/\%d\t%s\t\t%.2f\n",edificio[i].apellido,edificio[i].piso,edificio[i].depto,edificio[i].fec.mes,edificio[i].fec.anio,edificio[i].gast.concepto[0],edificio[i].gast.importe[0]);
        }
    }

