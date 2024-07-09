#include <stdio.h>

// Функція для обчислення часу з'їдання пирога
double calculate_time(double t1, double t2, double t3) {
    // Обчислення загальної швидкості з'їдання пирога
    double total_rate = (1 / t1) + (1 / t2) + (1 / t3);
    
    // Знаходження часу
    double total_time = 1 / total_rate;
    
    // Округлення до 2 знаків після коми
    return total_time;
}

int main() {
    system("chcp 1251");
    system("cls"); 
    double t1, t2, t3;

    // Введення трьох значень
    printf("Введіть три значення:\n");
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    
    // Обчислення необхідного часу
    double time_needed = calculate_time(t1, t2, t3);
    
    // Виведення результату з округленням до 2 знаків після коми
    printf("Час, необхідний для з’їдання пирога: %.2f годин\n", time_needed);
    
    return 0;
}
