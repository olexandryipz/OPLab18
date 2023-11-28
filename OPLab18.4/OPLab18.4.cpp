#include <stdio.h>
#include <Windows.h>

int main() {
    int n;

    printf("Введіть значення n (парне і більше 2): ");
    scanf_s("%d", &n);

    if (n < 2 || n % 2 != 0) {
        printf("Введене значення n непарне або менше 2.\n");
        return 1;
    }

    double result = 1.0;

    for (int i = 2; i <= n; i += 2) {
        double term = (double)(i - 1) / (i + 1);
        result *= term;
    }

    printf("Результат обчислення: %lf\n", result);

    return 0;
}
