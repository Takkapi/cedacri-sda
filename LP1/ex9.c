#include <stdio.h>
#include <stdlib.h>

void calculareFrecventa(int n, const int *note, int *frecventa) {
    for(int i = 1;  i <= 10; i++) *(frecventa + i) = 0;
    
    for(int i = 0; i < n; i++)
        if(*(note + i) >= 1 && *(note + i) <= 10)
            (*(frecventa + *(note + i)))++;
}

void histograma(const int* frecventa) {
    int max_frecventa = 0;
    for(int i = 1; i <= 10; i++)
        if(*(frecventa + i) > max_frecventa)
            max_frecventa = *(frecventa + i);

    for(int i = 1; i <= 10; i++) {
        printf("%d: ", i);

        for(int j = 0; j < *(frecventa + i); j++)
            printf("*");

        for(int j = 0; j < max_frecventa - *(frecventa + i); i++) 
            printf("-");

        printf("\n;");
    }
}

int main() {
    int* note = NULL;
    int n;

    int frecventa = (int*)malloc(11 * sizeof(int));
    if(frecventa == NULL) return 1;

    printf("Dati un numar n: ");
    scanf("%d", &n);

    note = (int*)malloc(n * sizeof(int));
    if(note == NULL) return 1;

    for(int i = 0; i < n; i++) {
        printf("Dati o nota de la 1 la 10 pentru pozitia %d: ", i + 1);
        scanf("%d", (note + i));
    }

    calculareFrecventa(n, note, frecventa);
    histograma(frecventa);

    free(note);
    free(frecventa);
    return 0;
}