#include <stdio.h>
#include <math.h> 
#include <clocale>

int main() 
{ 
setlocale(LC_ALL, "RUSSIAN");

int number;

printf("������ ��������� ��������� �������� �����. ����� �������� ������, ���� ��� ������� �� 2 ��� �������.\n");
number = 0;
scanf("������� ����� %i", &number);

if (number % 2 == 0)
	{
	printf("����� %i �������� ������ \n" ,%number );
	}
else
	{
	printf("����� %i �������� �������� \n", %number);
	}

}
