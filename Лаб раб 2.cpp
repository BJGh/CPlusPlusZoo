#include <stdio.h>
#include <math.h> 
#include <clocale>

int main() 
{ 
setlocale(LC_ALL, "RUSSIAN");

int number;

printf("Данная программа проверяет четность числа. Число является чётным, если оно делится на 2 без остатка.\n");
number = 0;
scanf("Введите число %i", &number);

if (number % 2 == 0)
	{
	printf("Число %i является чётным \n" ,%number );
	}
else
	{
	printf("Число %i является нечётным \n", %number);
	}

}
