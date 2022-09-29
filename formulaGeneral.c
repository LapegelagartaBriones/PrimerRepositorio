//Programado por: JC Briones
#include <stdio.h>
#include<math.h>
void main()
{
    int a, b, c;
    float x1,x2;
    printf("Programa que resuelve una ecuacion de segundo grado\n");
    printf("Escriba el valor de a: ");
    scanf_s("%d", &a);
    printf("\nEscriba el valor de b: ");
    scanf_s("%d", &b);
    printf("\nEscriba el valor de c: ");
    scanf_s("%d", &c);
    x1 =(-b + sqrt(b * b - 4 * a * c))/ (2 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    printf("\n\n El resultado para X1:%.2f y para X2:%.2f\n\n",x1,x2);
}

