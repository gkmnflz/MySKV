#include <conio.h>
#include <stdio.h>
#include <locale.h>
void main(void) {
	setlocale(LC_ALL, "");
	float x, y;
	printf("Введите x: ");
	scanf_s("%f", &x);
	printf("Вы ввели %.1f\n", x);
	y = x * x;
	printf("y = %.1f", y);
	_getch();
}