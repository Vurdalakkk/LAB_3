#include <stdio.h>
#include <locale.h>

#define RASHOD 0.06  

int main() {
    setlocale(LC_CTYPE, "RUS");
    int s;  
    float c;  

    puts("������� ����������, ������� ������ �������� (��):");
    scanf("%d", &s);
    getchar();

    puts("������� ��������� ������� (���./����):");
    scanf("%f", &c);  
    getchar();

   
    float total_cost = s * RASHOD * c;

    printf("��� ����������� ����� %.2f ���.\n", total_cost);
    return 0;
}