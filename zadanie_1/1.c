#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS"); // Исправлено на setlocale

    int num;
    puts("Введите целое число");
    scanf("%d", &num);
    getchar();
    printf("Вы ввели число %d", num);
    int num2;
    puts("\nВведите целое число");
    scanf("%d", &num2);
    getchar();
    printf("Вы ввели число %d", num2);
    printf("\n%d + %d = %d", num2, num, num2 + num);
    printf("\n%d - %d = %d", num2, num, num2 - num);
    printf("\n%d * %d = %d", num2, num, num2 * num);
    printf("\n%d / %d = %d", num2, num, num2 / num);
    printf("\n%d %% %d = %d", num2, num, num2 % num);
}