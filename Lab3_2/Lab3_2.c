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

	puts("�������� ����� ����� ������, ������� ������ ��������� � ��");

	scanf("%d", &dym);

	result1 = D1 * dym, result2 = D2 * dym, result3 = D3 * dym;
	printf("%d ���������� ������ � ��� %.2f ��", dym, result1);
	printf("\n%d ��������� ������ � ��� %.2f ��", dym, result2);
	printf("\n%d �������������� ������ � ��� %.2f ��", dym, result3);

	system("pause");
	return 0;
}