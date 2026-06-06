#include <stdio.h>

int main() {
    int distanta, consum;
    float media;

    printf("Introdu distanta parcursa (in km) si cantitatea de carburant consumata (in litri): ");
    scanf("%d %d", &distanta, &consum);

    printf("Distanta: %d\nConsum: %d\nConsum/Distanta: %d\n", distanta, consum, (consum / distanta));

    media = (consum / distanta) * 100;

    printf("Consumul mediu de carburant per 100km este %.2f\n", media);

    return 0;
}