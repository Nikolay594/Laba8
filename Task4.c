#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

double fx(double x);


int main() {
    setlocale(LC_CTYPE, "RUS");
    task4();

    return 0;
}

double fx(double x) {
    return x * x * x * x - 2 * x * x + 1;
}

int task4() {
    double x, a, b, f, h;
    a = 0.0;
    b = 4.0;
    printf("¬ведите h: ");
    if (scanf("%lf", &h) != 1 || h <= 0) {
        puts("ќшибка! Ўаг должен быть больше 0!");
        return 1;
    }
    puts("\n   x          y");
    puts("-----------------------");
    for (x = a; x <= b + (h / 2.0); x += h) {
        f = fx(x);

        printf("\n%6.2lf %10.4lf", x, f);
    }
    printf("\n");
    return 0;
}