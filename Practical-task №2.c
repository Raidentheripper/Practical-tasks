#include <stdio.h>

// Функція для знаходження НСД двох чисел за алгоритмом Евкліда
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функція для знаходження НСК двох чисел
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Функція для знаходження НСК масиву чисел
int find_lcm(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }
    return result;
}

int main() {
    int n;
system("chcp 1251");
    system("cls");
    // Зчитування кількості чисел
    printf("Введіть кількість чисел: ");
    scanf("%d", &n);

    // Зчитування чисел
    int arr[n];
    printf("Введіть числа через пробіл: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Знаходження НСК
    int result = find_lcm(arr, n);

    // Виведення результату
    printf("Найменше спільне кратне заданих чисел: %d\n", result);

    return 0;
}
