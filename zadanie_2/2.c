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
	puts("Ќапишите целое число дюймов, которое хотите перевести в см");
	scanf("%d", &dym);
	result1 = D1 * dym;
	result2 = D2 * dym;
	result3 = D3 * dym;
	printf("%d английских дюймов Ц это %.2f см", dym,result1);
	printf("\n%d испанских дюймов Ц это %.2f см", dym, result2);
	printf("\n%d старолитовских дюймов Ц это %.2f см", dym, result3);

}