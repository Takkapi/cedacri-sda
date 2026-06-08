#include <stdio.h>

int main() {
    int an;

    printf("Introduceti un an: ");
    scanf("%d", &an);

    if((an % 4 == 0 && an % 100 != 0) || (an % 400 == 0)) printf("%d este un an bisec.\n", an);
    else printf("%d nu este un an bisec.\n", an);

    return 0;
}