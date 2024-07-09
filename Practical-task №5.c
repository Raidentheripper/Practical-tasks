#include <stdio.h>

#define MOD 12345

int count_sequences(int n) {
    if (n == 1) return 2; // 0, 1
    if (n == 2) return 4; // 00, 01, 10, 11

    // Ініціалізація масиву для динамічного програмування
    int dp[n+1];
    dp[0] = 1; // порожня послідовність
    dp[1] = 2; // 0, 1
    dp[2] = 4; // 00, 01, 10, 11

    // Заповнення масиву dp згідно з рекурентною формулою
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % MOD;
    }

    return dp[n];
}

int main() {
    system("chcp 1251");
    system("cls");
    int n;

    // Введення довжини послідовності
    printf("Введіть довжину послідовності n: ");
    scanf("%d", &n);

    // Обчислення кількості допустимих послідовностей
    int result = count_sequences(n);

    // Виведення результату
    printf("Кількість допустимих послідовностей довжиною %d: %d\n", n, result);

    return 0;
}
