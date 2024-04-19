//Leer dos números e imprima cual es mayor y el menor de los números ingresados

#include <stdio.h>

int main() {
    int numero1, numero2;

    // Solicitar al usuario que ingrese los números
    printf("Ingrese el primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &numero2);

    // Verificar si numero1 es mayor que numero2
    if(numero1 > numero2) {
        printf("%d es mayor que %d\n", numero1, numero2);
    } else if(numero1 < numero2) { // Verificar si numero1 es menor que numero2
        printf("%d es menor que %d\n", numero1, numero2);
    } else { // Si no es mayor ni menor, entonces son iguales
        printf("%d es igual a %d\n", numero1, numero2);
    }

    return 0;
}
