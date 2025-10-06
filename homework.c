#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "RUS");
	int quantity;
	float price_unit, price;

	printf("Ââåäèòå êîëè÷åñòâî òîâàðà: ");
	scanf("%d", &quantity);

	printf("Ââåäèòå ñòîèìîñòü òîâàðà çà åäèíèöó: ");
	scanf("%f", &price_unit);

	price = quantity * price_unit;

	printf("Îáùàÿ ñòîèìîñòü ïîêóïêè: %.2f", price);

}
