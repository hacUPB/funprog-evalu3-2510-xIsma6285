#include <stdio.h>

int main(int argc, char const *argv[])
{
    int y;
    int *x = NULL;
    y = 35;
    x = &y;

    printf("Direccion de memoria de y %p\n", &y);
    printf("Contenido de x %p\n", x);
    printf("Contenido de y %d\n", y);

    (*x)= 100;
    printf("Contenido y %d\n", (*x));
    y = (*x) * 2;

    
    return 0;

}