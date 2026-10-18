#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "RUS");
    int x, sign = 1;
    double sum = 0;
    printf("¬ведите число: ");
    scanf("%d", &x);
    for (int i = 0; i < x; i++, sign *= -1) {
        sum += sign * (1 + (i + 1) / 10.0);
    }   
    printf("%.1f\n", sum);
}