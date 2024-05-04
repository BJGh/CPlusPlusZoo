#include "stdio.h"
#include "math.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
//Автор программы Папаев Ьурин-Жаргал Николаевич ИВБО-10-18 9 вариант
int Nechet(int a)
{
	int j = 0;
	while (a != 0) {
		j++;
		a = a / 10;
	}
	return(j);
}

int Pal(int b)
{
	int b1 = b;
	int s = 0; // перевернутое число
	while (b1 != 0) {
		s = s * 10 + b1 % 10;
		b1 /= 10;
	}
	if (s == b) {
		return(s);
	}
	else {
		return(0);
	}
}

void Reshenie(int &n) 
{
	int i;
	int count = 0;
	while (n != 0) 
	{
		cin >> i;
		if ((Nechet(i) % 2)) 
		{
			if (Pal(i)) {
				count++;
				
			}
		}
		n--;
	}
	cout << " count = " << count << endl;
}

int main()
{
	int n = 0;
	cin >> n;
	Reshenie(n);
	system("pause");
	return(0);
}

