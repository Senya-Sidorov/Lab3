#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
void main()
{
 int num1;
 int num2;

 setlocale(LC_CTYPE, "RUS");
 puts("������� ������ �����");
 scanf("%d", &num1);
 puts(" ");
 puts("������� ������ �����");
 scanf("%d", &num2);
 puts("");
 printf("�����: %d, ��������: %d, ������������: %d, �������: %d, �������: %d", num2 + num1, num2 - num1, num2 * num1, num2 / num1, num2 % num1);

 system("pause");
 return 0;
}