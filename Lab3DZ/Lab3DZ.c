#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	float a;
	float r, R;
	float koren2 = 1.41421; // корень из двух

	puts("Введите сторону квадрата a: ");

	scanf("%f", &a);

	r = a / 2.0;
	R = (a * koren2) / 2.0;

	printf("Радиус вписанной окружности r = %.3lf\n", r);
	printf("Радиус описанной окружности R = %.3lf\n", R);

	return 0;
}