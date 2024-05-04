#include <stdio.h>
#include <conio.h>
#include <clocale>

main ()
	{
		setlocale(LC_ALL, "RUSSIAN");
	char note;
	printf("Согласно общепринятой системе обозначений музыкальные ноты обозначаются латинскими буквами от C до H. Введите букву и узнайте, какая эта нота.\n");
	scanf("%s", &note);
	
	switch (note)
		{
		case 'C': printf("Эта нота до. \n");break; 
		case 'D': printf("Эта нота ре. \n");break;
		case 'E': printf("Эта нота ми. \n");break;
		case 'F': printf("Эта нота фа. \n");break;
		case 'G': printf("Эта нота соль. \n");break;
		case 'A': printf("Эта нота ля. \n");break;
		case 'H': printf("Эта нота си. \n");break;
		default: printf("Неправильный ввод.\n");
		}
		getch();
	}
