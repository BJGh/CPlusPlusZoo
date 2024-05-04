#include <stdio.h>
#include <conio.h>
#include <math.h> 
#include <clocale>

main() 
{ 
setlocale(LC_ALL, "RUSSIAN");

float kilometer = 1.0668,versta,result; 

printf("Добро пожаловать в программу пересчета из верст в километры!1 верста равна 1066.8 метрам. Для начала, введите версту \n");
scanf("%f", &versta);
result = versta * kilometer;
printf("Результат = %3.4f * %3.0f = %3.2f километров\n", kilometer,versta,result);

getch();

return 0;

}
