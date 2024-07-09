#include <stdio.h>
#include <string.h>

// Функція для обчислення факторіалу
unsigned long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// Функція для підрахунку кількості кожної літери
void countFrequencies(char *word, int *freq) {
    int length = strlen(word);
    for (int i = 0; i < length; ++i) {
        char ch = word[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            freq[ch - 'A']++;
        }
    }
}

// Функція для обчислення кількості анаграм
unsigned long long countAnagrams(char *word) {
    int freq[26] = {0};
    countFrequencies(word, freq);
    int length = strlen(word);
    unsigned long long totalAnagrams = factorial(length);

    for (int i = 0; i < 26; ++i) {
        if (freq[i] > 1) {
            totalAnagrams /= factorial(freq[i]);
        }
    }

    return totalAnagrams;
}

int main() {
    system("chcp 1251");
    system("cls");
    char word[15];
    printf("Введіть слово: ");
    scanf("%s", word);

    unsigned long long anagrams = countAnagrams(word);
    printf("Кількість анаграм: %llu\n", anagrams);

    return 0;
}
