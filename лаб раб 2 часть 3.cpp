#include <stdio.h>
#include <conio.h>
#include <clocale>

main ()
	{
		setlocale(LC_ALL, "RUSSIAN");
	char note;
	printf("�������� ������������ ������� ����������� ����������� ���� ������������ ���������� ������� �� C �� H. ������� ����� � �������, ����� ��� ����.\n");
	scanf("%s", &note);
	
	switch (note)
		{
		case 'C': printf("��� ���� ��. \n");break; 
		case 'D': printf("��� ���� ��. \n");break;
		case 'E': printf("��� ���� ��. \n");break;
		case 'F': printf("��� ���� ��. \n");break;
		case 'G': printf("��� ���� ����. \n");break;
		case 'A': printf("��� ���� ��. \n");break;
		case 'H': printf("��� ���� ��. \n");break;
		default: printf("������������ ����.\n");
		}
		getch();
	}
