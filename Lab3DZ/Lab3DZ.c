#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	float a;
	float r, R;
	float koren2 = 1.41421; // ������ �� ����

	puts("������� ������� �������� a: ");

	scanf("%f", &a);

	r = a / 2.0;
	R = (a * koren2) / 2.0;

	printf("������ ��������� ���������� r = %.3lf\n", r);
	printf("������ ��������� ���������� R = %.3lf\n", R);

	return 0;
}