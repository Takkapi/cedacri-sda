#include <stdio.h>

int main() {
    int nota;

    printf("Introduceti nota: ");
    scanf("%d", &nota);

    if(nota < 1 || nota > 10) printf("Introduceti nota de la 1 la 10!\n");

    if(nota <= 4) printf("Insuficient\n");
    else if(nota <= 6) printf("Suficient\n");
    else if(nota <= 8) printf("Bine\n");
    else if (nota >= 9) printf("Foarte bine\n");

    return 0;
}