#include <stdio.h>
#include <locale.h>
#define      D1       2.54
#define      D2       2.32166
#define      D3       2.7076

int main() {
	setlocale(LC_CTYPE, "RUS");
	int dym;
	float result1;
	float result2;
	float result3;
	float ispan = 2.32166;
	float starolit = 2.7076;
	puts("�������� ����� ����� ������, ������� ������ ��������� � ��");
	scanf("%d", &dym);
	result1 = D1 * dym;
	result2 = D2 * dym;
	result3 = D3 * dym;
	printf("%d ���������� ������ � ��� %.2f ��", dym,result1);
	printf("\n%d ��������� ������ � ��� %.2f ��", dym, result2);
	printf("\n%d �������������� ������ � ��� %.2f ��", dym, result3);

}