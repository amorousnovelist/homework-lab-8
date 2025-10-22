#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

void main()
{
	system("chcp 1251");
	int n;
	double result = 1.0;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++)
		result *= 1.0 - (1.0 / pow(i, 2));
	printf("Результат вычислений: %f\n", result);
}