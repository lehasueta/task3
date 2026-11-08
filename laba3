#include <stdio.h>
#include <locale.h>
#define D 2.54
#define D1 2.32

int main()
{
	setlocale(LC_CTYPE, "RUS");
	z1();
	z2();
	z3();
	return 0;
}

int z1()
{

	int num;
	puts("введите целое число");
	scanf_s("%d", &num);
	printf("введено число %d\n", num);
	int num2;
	puts("введите целое число");
	scanf_s("%d", &num2);
	printf("сумма: %d + %d = %d\n", num, num2, num + num2);
	printf("разность: %d - %d = %d\n", num, num2, num - num2);
	printf("произведение: %d * %d = %d\n", num, num2, num * num2);
	printf("частное: %d / %d = %d\n", num, num2, num2 % num);
	return 0;
}

int z2()
{

	int dym;
	int pul;
	float result, result2;
	puts("введите число для рассчёта дюймов");
	scanf_s("%d", &dym);
	result = D * dym;
	printf(" %d дюймов – это %.1f см\n", dym, result);
	puts("введите число для рассчёта пульгадов");
	scanf_s("%d", &pul);
	result = D1 * pul;
	printf(" %d дюймов – это %.1f см\n", pul, result);
	return 0;


}

int z3()
{
	float a, b;
	
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	printf("|-------------------------------------------|\n");
	printf("| a * b | a+b   | a-b  |\n");
	printf("|----------------------|\n");
	printf("| %.2f * %.2f |  %.2f +  %.2f |%.2f - %.2f  |\n", a, b, a, b, a, b);
	printf("|----------------------|\n");
	printf("|  %.2f   |   %.2f   |  %.2f  |\n", a + b, a - b, a * b);
	printf("|----------------------|\n");

}
 
