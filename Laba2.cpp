#include <stdio.h>
#include <conio.h>
#include <clocale>


main ()
{
	setlocale(LC_ALL, "RUSSIAN");
 int Month;
 
 printf ("������� ����� � �������, ����� ������ �������\n");
 scanf("%d", &Month);
 
 switch (Month)
 {
 	case 1:
	case 2:
	case 3:
		printf("\n 1 �������"); break;
	case 4:
	case 5:
	case 6:
		printf("\n 2 �������"); break;
	case 7:
	case 8:
	case 9:
		printf("\n 3 �������"); break;	
	case 10:
	case 11:
	case 12:
		printf("\n 4 �������"); break;
	default :
		printf("\n ������ �����."); break;
	}
	getch();
}
