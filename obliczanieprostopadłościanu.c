#include <stdio.h>

double obliczObjetosc(double a, double b, double c) {
    return a * b * c;
}

int main() {
    double a, b, c;

    double wynik;

    printf("=== Program obliczajacy objetosc prostopadloscianu ===\n\n");

    printf("Podaj dlugosc boku a: ");
    if (scanf("%lf", &a) != 1) { printf("Blad: podaj liczbe!\n"); return 1; }

    printf("Podaj dlugosc boku b: ");
    if (scanf("%lf", &b) != 1) { printf("Blad: podaj liczbe!\n"); return 1; }

    printf("Podaj dlugosc boku c: ");
    if (scanf("%lf", &c) != 1) { printf("Blad: podaj liczbe!\n"); return 1; }

    if (a <= 0 || b <= 0 || c <= 0) {
        printf("\nBlad: Wymiary musza byc wieksze od zera!\n");
    } else {
        wynik = obliczObjetosc(a, b, c);
        printf("\nObjetosc prostopadloscianu wynosi: %.2lf\n", wynik);
    }

    return 0;
}
