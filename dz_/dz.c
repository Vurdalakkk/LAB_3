#include <stdio.h>
#include <locale.h>

#define RASHOD 0.06  

int main() {
    setlocale(LC_CTYPE, "RUS");
    int s;  
    float c;  

    puts("¬ведите рассто€ние, которое хотите проехать (км):");
    scanf("%d", &s);
    getchar();

    puts("¬ведите стоимость бензина (руб./литр):");
    scanf("%f", &c);  
    getchar();

   
    float total_cost = s * RASHOD * c;

    printf("¬ам понадобитс€ около %.2f руб.\n", total_cost);
    return 0;
}