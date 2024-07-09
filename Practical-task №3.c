#include <stdio.h>
#include <math.h>

// Функція для обчислення кількості чисел з р розрядів
unsigned long long count_numbers(int p) {
    // Загальна кількість чисел без обмежень
    unsigned long long total = pow(2, p);

    // Кількість чисел з трьома однаковими цифрами поспіль
    unsigned long long excluded = (p - 2) * pow(2, p - 3);

    // Обчислення кінцевого результату
    unsigned long long result = total - excluded;

    return result;
}

int main() {
    int p;
    system("chcp 1251");
    system("cls");
    // Введення кількості розрядів
    printf("Введіть кількість розрядів: ");
    scanf("%d", &p);

    // Обчислення кількості чисел
    unsigned long long result = count_numbers(p);

    // Виведення результату
    printf("Кількість чисел із %d розрядів: %llu\n", p, result);

    return 0;
}
