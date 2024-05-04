#include "stdio.h"
#include "math.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
// Автор программы Папаев Б-Ж. Н. ИВБО-10-18 9 вариант.
void zad2(int &j)
{
	int  b = 0, ost = 0, chislo = 0, i = 0, dat = 0, count = 0;
	while (j != 0) 
	{
		cin >> j;
		b = j;
		dat = b;
		while (b != 0)
		{
			ost = b % 2;
			i++;
			chislo = chislo + ost * pow(10, i);
			b = b / 2;
		}
		chislo /= 10;
		ost = 0;
		b = 0;

		for (i; i != 0; i--)
		{
			ost = chislo % 10;
			b = b + ost * pow(2, i - 1);
			chislo = chislo / 10;
		}
		if (dat == b) {
			count++;
		}
	}
	cout << " count = " << count << endl;
	system("pause");
}


int main()
{
	setlocale(LC_ALL, "rus");
	int  a = 0,n = 0;
	cout << "Введите число" << endl;;
	cin >> n;
	if (n > 0)
	{
		zad2(n);
	
	}
	else 
	{
		cout << "ОШИБКА" << endl;
		system("pause");
		return(1);
		
	}

}
    
    
    
    
    
