#include <stdio.h>

int min_steps(int x, int y) {
    // Відстань, яку необхідно покрити
    int d = y - x;

    // Ініціалізація змінних
    int step = 0;
    int total_steps = 0;

    // Крокування до досягнення необхідної відстані
    while (d > 0) {
        step += 1;
        if (d >= 2 * step) {
            d -= 2 * step;
            total_steps += 2;
        } else {
            if (d > step) {
                total_steps += 2;
            } else {
                total_steps += 1;
            }
            break;
        }
    }

    return total_steps;
}

int main() {
    system("chcp 1251");
    system("cls");
    int x = 45;
    int y = 48;
    printf("Мінімальна кількість кроків від %d до %d: %d\n", x, y, min_steps(x, y));
    return 0;
}
