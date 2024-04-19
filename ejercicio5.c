/*Cree una función calcular el total a pagar por la compra de un auto sabiendo el precio,
el impuesto de valor agregado del 15%, y el descuento del 5% si este excede su precio a U$ 25,000*/
#include <stdio.h>


float calcularTotal(float precio) {
    float total;
    float impuesto = 0.15 * precio;

if (precio > 25000){
    float descuento = 0.05 * precio;
    total = precio + impuesto - descuento;
}
else{
    total = precio + impuesto;
}
return total;
}

int main(int argc, char const *argv[])
{
    float precioAuto;
    printf("Ingrese el precio del auto: ");
    scanf("%f", &precioAuto); 

    if(precioAuto < 0){
        printf("El precio del auto debe ser un valor positivo.\n ");
        return 1;
    
    }

    //Calcular total a pagar
    float totalPagar = calcularTotal(precioAuto);
    printf("El precio original es: %.2f", precioAuto);
    printf("]\nTotal a pagar por la compra del auto es de: %.2f\n ", totalPagar);

    return 0;
}
