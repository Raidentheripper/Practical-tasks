#include <stdio.h>
#include <math.h>

int main() {
    system("chcp 1251");
    system("cls");
    // Введення координат вектора
    int x1, y1, x2, y2;
    printf("Введіть координати початку вектора (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    printf("Введіть координати кінця вектора (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    // Обчислення різниці координат
    int dx = x2 - x1;
    int dy = y2 - y1;

    // Обчислення квадратів різниць координат
    double dx_sq = pow(dx, 2);
    double dy_sq = pow(dy, 2);

    // Обчислення суми квадратів різниць координат
    double sum_sq = dx_sq + dy_sq;

    // Обчислення довжини вектора
    double length = sqrt(sum_sq);

    // Виведення результату з точністю до шести знаків після коми
    printf("Довжина вектора: %.6lf\n", length);

    return 0;
}
