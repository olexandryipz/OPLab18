#include <stdio.h>
#include <Windows.h>
#define MAX_SIZE 100

int findMaxElementOfArray(int array[], int n) {
    if (n == 1) {
        return array[0];
    }
    else {
        int maxInRest = findMaxElementOfArray(array + 1, n - 1);

        return (array[0] > maxInRest) ? array[0] : maxInRest;
    }
}

int main() {
    int n;

    printf("Введіть розмір масиву (не більше %d): ", MAX_SIZE);
    scanf_s("%d", &n);

    if (n > MAX_SIZE) {
        printf("Помилка: Розмір масиву перевищує максимально допустимий розмір %d\n", MAX_SIZE);
        return 1;
    }

    int array[MAX_SIZE];

    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &array[i]);
    }

    int maxElement = findMaxElementOfArray(array, n);

    printf("Максимальний елемент в масиві: %d\n", maxElement);

    return 0;
}
