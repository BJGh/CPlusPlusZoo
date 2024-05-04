#include <stdlib.h>
#include <iostream>
#include "time.h"
using namespace std;
void vvod(int x[], int &n, int flag, int b[], int &check_X, int &check_b, int &size_b);
void vivod(int x[], int n); // вывод массива x
void vivod_B(int b[], int n); // вывод массива B 
int Fib(int x[],int n);
int max_for_b(int x[], int n);
void For_Array_B(int b[], int n, int x[], int &check_B, int &size_b);
int Sum(int x[], int i);
void Delete_el(int x[], int &n);
void sdvig(int x[], int n);
int main()
{
	int i;
	int size_b = 0;
	int n=0;
	
	setlocale(LC_ALL, "rus");
	cout << "1 - ввод с клавиатуры" << endl;
	cout << "2 - ввод при помощи генератора случайных чисел" << endl;
	cout << "3 - вывод массива x" << endl;
	cout << "4 - вывод массива b" << endl;
	cout << "5 - выход из программы" << endl;
	int *x = new int[n];
	int *b = new int[n];
	int check_X = 0;
	int check_B = 0;
	int j = 0;
	int k = 1;
	while (k != 0) 
	{
		cin >> i;
		switch (i)
		{
		case 1:
		{
			cout << "Выбран режим ввода с клавиатуры" << endl;
			if (check_X) {


				/*delete[]  x;
				delete[]  b;
				int *x = new int[n];
				int *b = new int[n];*/
				int flag = 1;
				vvod(x, n, flag, b, check_X, check_B, size_b);
			}
			else 
			{
				
				int flag = 1;
				vvod(x, n, flag, b, check_X, check_B, size_b);
			}

			break;
		}
		case 2:
		{

			cout << "Выбран режима наполнения массива случайными числами" << endl;
			if (check_X) {


				/*delete[]  x;
				delete[]  b;
				int *x = new int[n];
				int *b = new int[n];*/
				int flag = 0;
				vvod(x, n, flag, b, check_X, check_B, size_b);
			}
			else
			{

				int flag = 0;
				vvod(x, n, flag, b, check_X, check_B, size_b);
			}


			break;
		}
		case 5: 
		{
			
			cout << "Вы вышли из программы" << endl;
				k = 0;
			break;
		}
		case 3: 
		{
			if (check_X)
			{
				vivod(x, n);
			}
			else 
			{
				cout << "Массив пуст!" << endl;
			}

			break;
		}
		case 4: 
		{
			if (check_B) 
			{
				
				vivod_B(b, size_b-1);
			}
			else 
			{
				cout << "Массив пуст!" << endl;
			}
			break;
		}
		default:
		{
			cout << " Некорректный режим" << endl;
			break;
		}


		}
	}

	
   system("pause");
}



void vvod(int x[], int &n, int flag , int b[], int &check_X, int &check_B, int &size_b)  // flag = 1 клава , flag = 0 рандом 
{
	cout << "Введите кол-во элементов массива" << endl;
	cin >> n;
	check_X = 1;
	if (!(n >= 0))
	{
		cout << "Размер неотрицателен должен быть!!!";
	}
	else 
	{
		if (flag)
		{

			for (int i = 0; i <= n; i++) // ввод с клавиатуры
			{
				cin >> x[i];
				
			}

		}
		else
		{
			srand(time(0));
			for (int i = 0; i <= n; i++) // ввод рандомом
			{
				x[i] = 1 + rand() % 100;
				cout << "x[" << i << "] = " << x[i] << endl;
				
			}
		}
		
		if (Fib(x, n))  // задание 1
		{
			cout << "Последовательность Фиббоначи" << endl;
		}
		else 
		{
			cout << "Не последовательность Фиббоначи" << endl;
		}
		//realloc(b,1000000); // расщиряем размер до n
		For_Array_B(b, n, x, check_B, size_b);
		Delete_el(x, n);
		sdvig(x, n);
		
	}

}
void vivod(int x[], int n) 
{

	for (int i = 0; i <= n; i++) 
	{
	
	cout << "x[" << i << "] = " << x[i] << endl;
		
	}
}
int Fib(int x[], int n) 
{
	if (n == 0) 
	{
		if (x[n] == 1) 
		{
			return(1);
		}
		else {
			return(0);
		}

	}
	if (n == 1) 
	{
		if(x[0]==1 && x[1]==1)
		{
			return(1);
		}
		else {
			return(0);
		}
	}
	else 
	{ 
		int flag;
		for (int i = 1; i <= n-1; i++) 
		{
			if (x[i] == x[i + 1] - x[i - 1])
				{
				  flag = 1;
				}
			else 
			{
				flag = 0;
			}
		}
		if (flag) 
		{
			return(1);
		}
		else 
		{
			return(0);
		}
		
	}
}	
int max_for_b(int x[], int n) 
{
	int max = 0;
	for (int i = 0; i <= n; i++) 
	{
		if (x[i] % 2) 
		{
			if (!max) 
			{
				max = x[i];
			}
			else 
			{
				if (x[i] > max) 
				{
					max = x[i];
				}
			}
	    }
	}
	
	return(max);
}
void For_Array_B(int b[], int n, int x[], int &check_B, int &size_b)
{
	if (max_for_b(x,n)) 
	{
		cout << " max = " << max_for_b(x,n) << endl;
		int i = 2;
		int max = max_for_b(x,n);
		
		int j = 0; // кол-во элементов в массиве b окончательно
		while (i <= max)
		{
			
			if (!(max%i))
			{
				
				b[j] = i;
				cout << "b[" << j << "] = " << b[j] << endl;
				j++;

				max = max / i;
			}
			else
			{
				i++;
			}
		}
		size_b = j;
		//realloc(b,sizeof(int)*(n-j)); // сужаем размер до нужного
		check_B = 1;
		
	}
	else 
	{
		cout << "В массиве нет нечетных элкементов!";
	}
}
void vivod_B(int b[], int n) 
{
	for (int i = 0; i <= n; i++)
	{
		cout << "b[" << i << "] = " << b[i] << endl;
	}
}
int Sum(int x[],int i)
{
	int sum = 0;
	int check = x[i];
	while (check != 0) 
	{
		sum = sum + check % 10;
		check /= 10;
	}
	//cout << "sum = " << sum << " для x[" << i << "]" << endl;
	return(sum);
}
void swap(int &a, int &b)
{
	int swap = a;
	a = b;
	b = swap;
}
	
void Delete_el(int x[], int &n)
{
	cout << " Удаление элементов массива, где сумма цифр кратна 7" << endl;
	int k = 0, j = 0 ;
	int for_swap = 0;
	int for_swap_1 = 0;
	for (int i = 0; i <= n; i++)
	{
		if (!(Sum(x, i) % 7)) {
			x[i] = -1;
		}
	}
	cout << " изменяем " << endl;
	vivod(x, n);
	for (int i = 0; i <= n; i++) 
	{
		for (k = i; k <= n; k++) 
		{

			if ((i != n) && (x[i] == -1) && (i!=k) && (x[k] != -1))
			{
			
				swap(x[i],x[k]);
			}
			
		}
	}
	for (int i = 0; i <= n; i++) 
	{
		if (x[i] == -1) 
		{
			j++;
		}
	}
	n -= j;
	//realloc(x, sizeof(int)*(n));
	cout << " после удаления" << endl;
	vivod(x,n );
}
void sdvig(int x[], int n) 
{
	int k = 0;
	cout << "Введите значение, на которое циклически сдвинется массив влево" << endl;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int temp = x[0];
		int j;
		//cout << " n = " << n << endl;
		for (j = 0; j <= n - 1; j++)
		{
			x[j] = x[j + 1];

		}
		//x[n-1] = temp;
		swap(x[n], temp);

	}

	
	
	
	
	vivod(x, n);
	
	
}

