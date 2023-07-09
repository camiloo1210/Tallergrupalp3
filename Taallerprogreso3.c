#include <stdio.h>
#include <stdlib.h>

struct Factura// Estructura de la informacion para la factura
{
    char Marca[20];
    char Modelo[30];
    char Observaciones [25];
    float Precio; 

};
struct Usuario// Estructura de la informacion del usuario 
    {
    char Nombre[30];
    char Direccion[35];
    char Cedula [10];
    };
float Precio (int opcion)//Funcion que devuelve el valor del mantenimiento
{
    //Dependiendo de la opcion se regresa el valor adecuado
    if (opcion == 1)
    {
        return 30.50;
    }

    if (opcion == 2)
    {
        return 23.75;
    }

    if (opcion == 3)
    {
        return 15.50;
    }
}

void Factura1(struct Factura factura1,struct Usuario usuario1,int opcion)//Se usa la funcion Factura1 para poder imprimir posteriormente la factura con todos la informacion requerida
{
printf("\n");
printf("\n");
printf("Factura\n");
printf("Su nombre es:\n");
puts(usuario1.Nombre);
printf("Su direccion es:\n");
puts(usuario1.Direccion);
printf("Su cedula es:\n");
puts(usuario1.Cedula);
printf("La marca del ordenador es :\n");
puts(factura1.Marca);
printf("El modelo de la marca es:\n");
puts(factura1.Modelo);
printf("Las observaciones realizadas fueron las siguientes:\n");
puts(factura1.Observaciones);
printf("La opcion que escogiste fue la numero %i\n",opcion);
printf("El precio total del servicio es de : %f",Precio(opcion));
}

void Almacenamiento_Informacion(struct Factura factura1,struct Usuario usuario1,int opcion){//Funcion para guardar las respuestas de los usuarios en el archivo plano llamado registro.txt
FILE *archivo;
archivo=fopen("registro.csv","a");// Se uso a por la w crea el archivo desde 0 cada vez que se ejecuta, por otro lado el a no borra el archivo solo agrega mas informacion al archivo
fprintf(archivo,"%s;%s;%s;%s,%s;%s;%i;%.2f\n",usuario1.Nombre,usuario1.Direccion,usuario1.Cedula,factura1.Marca,factura1.Modelo,factura1.Observaciones,opcion,Precio(opcion));
fclose(archivo);
}

int main() {
    int opcion;
    struct Usuario usuario1;
    printf("Ingrese su nombre.\n");
    gets(usuario1.Nombre);
    printf("Ingrese su direccion.\n");
    gets(usuario1.Direccion);
    printf("Ingrese su cedula.\n");
    gets(usuario1.Cedula);
    // Division de informacion
    struct Factura factura1;
    printf("Ingrese la marca de su ordenador.\n");
    gets(factura1.Marca);
    printf("Ingrese el modelo de su ordenador.\n");
    gets(factura1.Modelo);
    printf("Ingrese alguna observacion a tener en cuenta para el servicio de su ordenador.\n");
    gets(factura1.Observaciones);
    printf("\n");
    while (1)
    {
        printf("\n");
        printf("Menu de opciones:\n");
        printf("1. Mantenimiento del ordenador\n");
        printf("2. Recuperacion de datos\n");
        printf("3. Formateo del ordenador\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("\n");
            printf("\n");
            printf("Ha seleccionado el mantenimiento del ordenador.\n");
            printf("El precio por el servicio seleccionado es %.2f\n", Precio(opcion));
            break;
        case 2:
            printf("\n");
            printf("\n");
            printf("Ha seleccionado la recuperacion de datos.\n");
            printf("El precio por el servicio seleccionado es %.2f\n", Precio(opcion));
            break;
        case 3:
            printf("\n");
            printf("\n");
            printf("Ha seleccionado el formateo del ordenador.\n");
            printf("El precio por el servicio seleccionado es %.2f\n", Precio(opcion));
            break;
        case 4:
            printf("\n");
            printf("Saliendo del programa...\n");
            return 0;
        default:
            printf("Opcion invalida. Por favor, seleccione una opcion valida.\n");
            break;
        }

        if (opcion == 1 || opcion == 2 || opcion == 3) // Solo entra a imprimir si alguna de las opciones encaja con la condicion
        {
            Factura1(factura1, usuario1, opcion); // Imprime la funcion void de factura1
            Almacenamiento_Informacion(factura1,usuario1,opcion);//Guarda la informacion dada por el usuario dentro de un archivo plano
            return 0;
        }
    }

    return 0;
}
