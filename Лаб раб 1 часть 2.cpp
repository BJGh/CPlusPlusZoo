#include <stdio.h>
#include <conio.h>
#include <math.h> 
#include <clocale>

main() 
{ 
setlocale(LC_ALL, "RUSSIAN");

float kilometer = 1.0668,versta,result; 

printf("����� ���������� � ��������� ��������� �� ����� � ���������!1 ������ ����� 1066.8 ������. ��� ������, ������� ������ \n");
scanf("%f", &versta);
result = versta * kilometer;
printf("��������� = %3.4f * %3.0f = %3.2f ����������\n", kilometer,versta,result);

getch();

return 0;

}
