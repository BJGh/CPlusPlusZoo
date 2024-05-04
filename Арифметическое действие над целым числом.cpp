#include <stdio.h>
int main (){
	int year = 2018; //объявление перемемнных.
	
	year = year - 1; //арифметическая операция 
	//year -- постфиксный декремент,укороченная форма записи
	//ЯЧЕЙКА ПАМЯТИ ПРИСВАИВАЕТ ПЕРЕМЕННОЙ year ЗНАЧЕНИЕ 2016 - 1
	printf("Prev year was:%i",year);
	
	getchar();
	return 0;
}
