#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#define D1 2.54
#define D2 2.32166
#define D3 2.7076

int main() 
{
	setlocale(LC_CTYPE, "RUS");

	int dym;
	float result1, result2, result3;
	float spanish = 2.32166;
	float old_lit = 2.7076;

	puts("Напишите целое число дюймов, которое хотите перевести в см");

	scanf("%d", &dym);

	result1 = D1 * dym, result2 = D2 * dym, result3 = D3 * dym;
	printf("%d английских дюймов – это %.2f см", dym, result1);
	printf("\n%d испанских дюймов – это %.2f см", dym, result2);
	printf("\n%d старолитовских дюймов – это %.2f см", dym, result3);

	system("pause");
	return 0;
}
