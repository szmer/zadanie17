#include <stdio.h>
#include <math.h>


// Wzór: V = 4/3 * Pi * r^3
double obliczObjetoscKuli(double r) {

    return (4.0 / 3.0) * M_PI * pow(r, 3);
}

int main() {
    double r;
    double wynik;

    printf("=== Program obliczajacy objetosc kuli ===\n\n");

    printf("Podaj promien kuli (r): ");
    if (scanf("%lf", &r) != 1) {
        printf("Blad: podaj poprawna liczbe!\n");
        return 1;
    }


    if (r <= 0) {
        printf("\nBlad: Promien musi byc wiekszy od zera!\n");
    } else {

        wynik = obliczObjetoscKuli(r);
        printf("\nObjetosc kuli o promieniu %.2lf wynosi: %.2lf\n", r, wynik);
    }

    return 0;
}
