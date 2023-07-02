#include <stdio.h>

int main() {
    int opcion;

    while (1) {
        printf("Menú de opciones:\n");
        printf("1. Opción 1\n");
        printf("2. Opción 2\n");
        printf("3. Opción 3\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Ha seleccionado la optimización del ordenador.\n");
                // Código para la opción 1
                break;
            case 2:
                printf("Ha seleccionado el cambio de software.\n");
                // Código para la opción 2
                break;
            case 3:
                printf("Ha seleccionado el reinicio del ordenador.\n");
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

return 0;
}