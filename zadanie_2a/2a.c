#include <stdio.h>
#include <locale.h>
#define      M1       1,852
#define      M2       1,609
#define      M3       1475
#define      M4       7,468
#define      M5       7412,6

int main() {
	setlocale(LC_CTYPE, "RUS");
	int mil;
	float result1;
	float result2;
	float result3;
	float result4;
	float result5;
	puts("�������� ����� ����� ����, ������� ������ ��������� � ���������");
	scanf("%d", &mil);
	result1 = M1 / 1000 * mil;
	result2 = M2 * mil;
	result3 = M3 / 1000 * mil;
	result4 = M3 * mil;
	result5 = M3 * mil;
	printf("%d ������� ���� � ��� %.2f ��", mil, result1);
	printf("\n%d ���������� ���� � ��� %.2f ��", mil, result2);
	printf("\n%d ������� ���� � ��� %.2f ��", mil, result3);
	printf("\n%d ������������ ���� � ��� %.2f ��", mil, result4);
	printf("\n%d �������������� ���� � ��� %.2f ��", mil, result5);

}