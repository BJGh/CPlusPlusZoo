
#include <stdlib.h>
#include  <iostream>

#include <time.h>

#define Raz 1000



using namespace std;

void swap(int   &a, int   &b)

{

	int   swap = a;

	a = b;




}

void vivod(int   x[], int   n);

void   vvod(int   x[], int   &n);

void   sort(int   x[], int   n);

int main()

{

	setlocale(LC_ALL, "rus");

	int x[Raz], n = 0;

	vvod(x, n);

	vivod(x, n);

	sort(x, n);

	cout << " ¬веденный массив " << endl;

	vivod(x, n);

	system("pause");
}

void   vvod(int   x[], int   &n)

{

	cout   <<   " ¬ведите число  "   <<   endl;

	cin >> n;

	srand(time(NULL));

	if(n   >   0 &&   n   <   1000)

	{

		for(int   i = 0;i<=n;i++)

		{





			x[i] = 1 + rand() % 9999;





		}

	}

	else

	{

		cout << "  ќшибка ввода" << endl;



	}

}

void sort(int   x[], int   n)

{

	for(int i=0;i<= n;i++)

	{

		for(int j = i;j<=n;j++)

		{

			if(!(x[j] % 2) && (x[j]> 0)&&(x[i]<0 || x[i]% 2   != 0))

			{

				swap(x[j], x[i]);

			}

			else

			{

				if(x[j] % 2 && x[j] > 0 &&   (x[i]<0 || x[i] % 2!= 0))

				swap(x[i] ,   x[j]);

			}

		}

	}

}

void vivod(int   x[], int   n)

{

	for(int i=0;   i<=n;   i++)

	{

		cout << " x [ " << i << " ]   =   " << x[i] << endl;

	}



}
