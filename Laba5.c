#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	double x, y, z, b;
	x = 6.251;
	y = 0.827;
	z = 25.001;
	b = (pow(y, cbrt(fabs(x))) + pow(cos(y), 3)) * (fabs(x - y) * (1 + sin(z) * sin(z)) / sqrt(x + y)) / (exp(fabs(x - y)) + x / 2);
	printf("b = %.6f\n", b);
	printf("Ожидаемый: 0.7121\n");
	printf("Разница: %.6f\n", b - 0.7121);

	return 0;

}

