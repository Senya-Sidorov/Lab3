#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#define M1 1,852
#define M2 1,609
#define M3 1475
#define M4 7,468
#define M5 7412,6

int main() {
	setlocale(LC_CTYPE, "RUS");
	int mil;
	float result1, result2, result3, result4, result5;

	puts("Напишите целое число миль, которое хотите перевести в километры");

	scanf("%d", &mil);

	result1 = M1 / 1000 * mil, result2 = M2 * mil, result3 = M3 / 1000 * mil, result4 = M3 * mil, result5 = M3 * mil;

	printf("%d морских миль – это %.2f км", mil, result1);
	printf("\n%d сухопутных миль – это %.2f км", mil, result2);
	printf("\n%d римских миль – это %.2f км", mil, result3);
	printf("\n%d старорусских миль – это %.2f км", mil, result4);
	printf("\n%d географических миль – это %.2f км\n", mil, result5);

	system("pause");
	return 0;
}
