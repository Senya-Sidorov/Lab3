#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<locale.h>

float a, b, result1, result2, result3;

void main()
{
	setlocale(LC_ALL, "RUS");
	puts("Введите первое вещественное число:");
	scanf("%f", &a);
	puts("Введите второе вещественное число:");
	scanf("%f", &b);
	result1 = a * b, result2 = a + b, result3 = a - b;

	puts("-------------------------------------------------------------");
	puts("|       a * b       |       a + b       |       a - b       |");
	puts("-------------------------------------------------------------");
	printf("| %7.1g * %7.1g | %7.1g + %7.1g | %7.1g - %7.1g |\n", a, b, a, b, a, b);
	puts("-------------------------------------------------------------");
	printf("| %17.1g | %17.1g | %17.1g |\n", result1, result2, result3);

}
