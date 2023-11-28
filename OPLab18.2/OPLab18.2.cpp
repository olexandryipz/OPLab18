#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

double calculatePolynomialRecursive(double x, double coefficients[], int n) {
    if (n == 0) {
        return coefficients[0];
    }
    else {
        return coefficients[n] + x * calculatePolynomialRecursive(x, coefficients, n - 1);
    }
}

int main() {
    int n;

    printf("Введіть ступінь полінома n: ");
    scanf_s("%d", &n);

    double* coefficients = (double*)malloc((n + 1) * sizeof(double));

    if (coefficients == 0) {
        printf("Помилка виділення пам'яті.\n");
        return 1;
    }

    printf("Введіть коефіцієнти полінома (від a0 до an): \n");
    for (int i = 0; i <= n; i++) {
        scanf_s("%lf", &coefficients[i]);
    }

    double x;

    printf("Введіть значення x: ");
    scanf_s("%lf", &x);

    double resultRecursive = calculatePolynomialRecursive(x, coefficients, n);

    printf("Значення полінома Pn при x = %.2lf: %.2lf\n", x, resultRecursive);

    free(coefficients);

    return 0;
}
