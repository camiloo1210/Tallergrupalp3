#include <stdio.h>

struct Factura// Estructura de la informacion para la factura
{
    char Marca[20];
    char Modelo[30];
    char Opcion [25];
    float Precio; 

};
struct Usuario// Estructura de la informacion del usuario 
    {
    char Nombre[30];
    char Direccion[35];
    char Cedula [10];
    };

float Mantenimiento(opcion)//Funcion que devuelve el valor del mantenimiento
{
    if (opcion==1)
    {
        return 30.50;
    }
}

float Recuperacion(opcion){//Funcion que devuelve el valor de la recuperacion de datos
    if (opcion==2)
    {
        return 23.75;
    }
}
float Formateo(opcion)//Funcion que devuelve el valor del Formateo
{
    if (opcion==3)
    {
        return 15.50;
    }
    
}

void Factura1(struct Factura factura1,struct Usuario usuario1)//Se usa la funcion Factura1 para poder imprimir posteriormente la factura con todos la informacion requerida
{
printf("Factura\n");
puts(usuario1.Nombre);
printf("\n");
puts(usuario1.Direccion);
printf("\n");
puts(usuario1.Cedula);
printf("\n");
puts(factura1.Marca);
printf("\n");
puts(factura1.Modelo);
printf("\n");
}

int main() {
    int opcion;

    while (1) {
        struct Factura factura1;
            struct Usuario usuario1;
            printf("Ingrese su nombre.\n");
            gets(usuario1.Nombre);
            printf("Ingrese su direccion.\n");
            gets(usuario1.Direccion);
            printf("Ingrese su cedula.\n");
            gets(usuario1.Cedula);
        printf("Ingrese la marca de su ordenador.\n");
        gets(factura1.Marca);
        printf("Ingrese el modelo de su ordenador.\n");
        gets(factura1.Modelo);
        printf("\n");
            if (1)
            {
            printf("Menú de opciones:\n");
            printf("1. Mantenimiento del ordenador\n");
            printf("2. Recuperacion de datos\n");
            printf("3. Formateo del ordenador\n");
            printf("4. Salir\n");
            printf("Seleccione una opción: ");
            scanf("%d", &opcion);

                switch (opcion) {
                    case 1:
                        printf("Ha seleccionado el mantenimiento del ordenador.\n");
                        printf("El precio por el servicio seleccionado es %.2f\n",Mantenimiento(opcion));
                        break;
                    case 2:
                        printf("Ha seleccionado la recuperacion de datos.\n");
                        printf("El precio por el servicio seleccionado es %.2f\n",Recuperacion(opcion));
                        break;
                    case 3:
                        printf("Ha seleccionado el formateo del ordenador.\n");
                        printf("El precio por el servicio seleccionado es %.2f\n",Formateo(opcion));
                        break;
                    case 4:
                        printf("Saliendo del programa...\n");
                        return 0;
                    default:
                        printf("Opción inválida. Por favor, seleccione una opción válida.\n");
                        break;
                    }
            }
            if (opcion==1 || opcion==2 || opcion==3  )
            {
              Factura1(factura1,usuario1);
              return 0;
            } 
    }

    return 0;
}