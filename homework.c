#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "RUS");
	int quantity;
	float price_unit, price;

	printf("������� ���������� ������: ");
	scanf("%d", &quantity);

	printf("������� ��������� ������ �� �������: ");
	scanf("%f", &price_unit);

	price = quantity * price_unit;

	printf("����� ��������� �������: %.2f", price);
}