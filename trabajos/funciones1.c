#include <stdio.h>
#include <math.h>  // Incluir la librería math.h

// Función que calcula el promedio de tres números usando punteros
void calcularPromedio(float num1, float num2, float num3, float *promedio) {
    *promedio = (float)(num1 + num2 + num3) / 3.0;  // Calculamos el promedio
}

int main() {
    float a, b, c;
    float promedio;

    // Solicitar al usuario que ingrese tres números
    printf("Ingresa el primer numero: ");
    scanf("%f", &a);
    printf("Ingresa el segundo numero: ");
    scanf("%f", &b);
    printf("Ingresa el tercer numero: ");
    scanf("%f", &c);

    // Llamada a la función para calcular el promedio
    calcularPromedio(a, b, c, &promedio);

    // Redondear el promedio usando la función round() de math.h
    promedio = round(promedio);

    // Imprimir el resultado redondeado
    printf("El promedio redondeado de los tres números es: %.0f\n", promedio);

    return 0;
}
