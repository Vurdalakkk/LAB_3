#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS"); // ���������� �� setlocale

    int num;
    puts("������� ����� �����");
    scanf("%d", &num);
    getchar();
    printf("�� ����� ����� %d", num);
    int num2;
    puts("\n������� ����� �����");
    scanf("%d", &num2);
    getchar();
    printf("�� ����� ����� %d", num2);
    printf("\n%d + %d = %d", num2, num, num2 + num);
    printf("\n%d - %d = %d", num2, num, num2 - num);
    printf("\n%d * %d = %d", num2, num, num2 * num);
    printf("\n%d / %d = %d", num2, num, num2 / num);
    printf("\n%d %% %d = %d", num2, num, num2 % num);
}