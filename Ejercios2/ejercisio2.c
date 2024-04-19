#include<stdio.h>

int main(int argc, char const *argv[])
{
    char product[30];
    int preciocomp;
    int precioven;
    int existencias;
    int ganaciaproduc;
    int ganaciatota;

    printf("\nBienvenido a mi codigo");
    printf("\nIngresar nombre del producto:");
    scanf("%s", &product);
    printf("\nIngresar precio compra del producto:");
    scanf("%d", &preciocomp);
    printf("\nIngresar precio venta del producto:");
    scanf("%d", &precioven);
    printf("Ingresar existencias:");
    scanf("%d", &existencias);

    
    ganaciaproduc=precioven-preciocomp;
    ganaciatota = ganaciaproduc*existencias;

    printf("\nEl producto ingresado fue:%s", product);
    printf("\nEl precio compra es de:%d", preciocomp);
    printf("\nEl precio de venta fue:%d", precioven);
    printf("\nLa cantidad de existencias es de: %d", existencias);
    printf("\nLa ganancia es de:%d", ganaciaproduc);
    printf("\nLa ganacia total es de:%d", ganaciatota);











    return 0;
}
