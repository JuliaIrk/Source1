//ƒано целое число.≈сли оно €вл€етс€ положительным, то прибавить к нему 1, в противном случае вычесть из него 2. ¬ывести полученное число.//

#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <iostream>





int main(int)
{
	setlocale(LC_ALL, "Russian");
	int a;
	printf_s("введите переменную а :");
	scanf_s("%d",&a);
	if (a >= 0) {
		a = a + 1;
	}
	else { a = a - 2;
	}
	printf_s("a = %d ", a);

}