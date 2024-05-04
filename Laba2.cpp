#include <stdio.h>
#include <conio.h>
#include <clocale>


main ()
{
	setlocale(LC_ALL, "RUSSIAN");
 int Month;
 
 printf ("¬ведите мес€ц и узнайте, какой сейчас квартал\n");
 scanf("%d", &Month);
 
 switch (Month)
 {
 	case 1:
	case 2:
	case 3:
		printf("\n 1 квартал"); break;
	case 4:
	case 5:
	case 6:
		printf("\n 2 квартал"); break;
	case 7:
	case 8:
	case 9:
		printf("\n 3 квартал"); break;	
	case 10:
	case 11:
	case 12:
		printf("\n 4 квартал"); break;
	default :
		printf("\n ќшибка ввода."); break;
	}
	getch();
}
