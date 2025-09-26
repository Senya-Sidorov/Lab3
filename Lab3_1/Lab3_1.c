#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
void main()
{
 int num1;
 int num2;

setlocale(LC_CTYPE, "RUS");
puts("Введите первое число");
scanf("%d", &num1);
puts(" ");
puts("Введите второе число");
scanf("%d", &num2);
puts("");
printf("Сумма: %d, Разность: %d, Произведение: %d, Частное: %d, Остаток: %d", num2 + num1, num2 - num1, num2 * num1, num2 / num1, num2 % num1);

 system("pause");
 return 0;
}
