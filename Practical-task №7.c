#include <stdio.h>
#include <math.h>

// Функція для визначення кількості точок перетину двох кіл
int getIntersectionPoints(double x1, double y1, double r1, double x2, double y2, double r2) {
    // Обчислення відстані між центрами
    double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Визначення кількості точок перетину
    if (d == 0 && r1 == r2) {
        // Кола співпадають
        return -1;
    } else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        // Кола не перетинаються
        return 0;
    } else if (d == r1 + r2 || d == fabs(r1 - r2)) {
        // Кола дотикаються в одній точці
        return 1;
    } else {
        // Кола перетинаються в двох точках
        return 2;
    }
}

int main() {
    system("chcp 1251");
    system("cls");
    double x1, y1, r1, x2, y2, r2;

    // Введення координат та радіусів кіл
    printf("Введіть координати і радіус першого кола (x1, y1, r1): ");
    scanf("%lf %lf %lf", &x1, &y1, &r1);
    printf("Введіть координати і радіус другого кола (x2, y2, r2): ");
    scanf("%lf %lf %lf", &x2, &y2, &r2);

    // Визначення кількості точок перетину
    int result = getIntersectionPoints(x1, y1, r1, x2, y2, r2);

    // Виведення результату
    printf("Кількість точок перетину: %d\n", result);

    return 0;
}
