#include <stdio.h>

struct Factura
{
    struct Usuario
    {
    char Nombre[30];
    char Direccion[35];
    char Cedula [10];
    };

    char Marca[20];
    char Modelo[30];
    char Opcion [25];
    float Precio; 

};

float Mantenimiento(opcion)
{
    if (opcion==1)
    {
        return 30.50;
    }
}

float Recuperacion(opcion){
    if (opcion==2)
    {
        return 23.75;
    }
}
float Formateo(opcion)
{
    if (opcion==3)
    {
        return 15.50;
    }
    
}

int main() {
    int opcion;

    while (1) {
        struct Usuario usuario1;
        printf("Ingrese su nombre.\n");
        gets(usuario1.Nombre);
        printf("Ingrese su direccion.\n");
        gets(usuario1.Direccion);
        printf("Ingrese su cedula.\n");
        gets(usuario1.Cedula);
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
                    // Código para la opción 1
                    break;
                case 2:
                    printf("Ha seleccionado la recuperacion de datos.\n");
                    // Código para la opción 2
                    break;
                case 3:
                    printf("Ha seleccionado el formateo del ordenador.\n");
                    // Código para la opción 3
                    break;
                case 4:
                    printf("Saliendo del programa...\n");
                    return 0;
                default:
                    printf("Opción inválida. Por favor, seleccione una opción válida.\n");
                    break;
            }
            }
    }

    return 0;
}