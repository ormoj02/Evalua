#include <iostream>
#include <stdio.h>
#include <conio.h>
float resultado;
float area, radio, pi;
// Este programa calcula el volumen de un cilindro.
void main()
{
    printf("radio = ");
    scanf("%d", &radio);
    pi = 3.141592653589793;
    area = pi*(radio*radio);
    printf("\narea =");
    printf(area);
}