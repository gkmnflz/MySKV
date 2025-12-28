#include <conio.h>
#include <stdio.h>
#include <locale.h>
void main(void) {
	setlocale(LC_ALL, "");
	float x;
	printf("Введите x: ");
	scanf_s("%f", &x);
	printf("Вы ввели %.1f", x);
	_getch();
}