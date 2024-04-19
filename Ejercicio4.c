#include <stdio.h>

float raiz(float num);

int main(int argc, char const *argv[])
{
    float num;
    printf("Escriba un numero del 80 al 200: ");
    scanf("%f", &num);


    if (num >= 80 && num <= 200)
    {
        printf("La raiz de %.1f es: %.2f ", num, raiz(num));
    }
    else
    {
        printf("El numero digitado no esta entre 80 y 200");
    }
    return 0;

}
    
    float raiz(float num){
    return sqrt(num);
}