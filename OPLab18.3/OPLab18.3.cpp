#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <math.h>

double calculatePolynomial(double x, double coefficients[], int n) {
    double result = coefficients[n];

    for (int i = n - 1; i >= 0; i--) {
        result = result * x + coefficients[i];
    }

    return result;
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

    double result = calculatePolynomial(x, coefficients, n);

    printf("Значення полінома Pn при x = %.2lf: %.2lf\n", x, result);

    free(coefficients);

    return 0;
}
