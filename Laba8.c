#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, sum = 0;

    scanf("%d %lf", &n, &x);

    for (int i = 1; i <= n; i++) {
        sum += sin(pow(x, i));
    }

    printf("%lf\n", sum);

    return 0;
}