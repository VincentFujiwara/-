// Задачник Абрамяна - задача If5
//
//Даны три целых числа. Найти количество положительных и количество
//отрицательных чисел в исходном наборе.
// 
// Решение Урсу Артёма


#include <stdio.h>

int main (){
	
	int n1,n2,n3,kolvoPlus,kolvoMinus;
	
	kolvoPlus = 0;
	kolvoMinus = 3;
	
	if (scanf ("%d %d %d",&n1,&n2,&n3) !=3){
	return 1;
	}
	
	if (n1>0) {
	kolvoPlus++;
	kolvoMinus--;
	}
	
	if (n2>0) {
	kolvoPlus++;
	kolvoMinus--;
	}

	if (n3>0) {
	kolvoPlus++;
	kolvoMinus--;
	}
	
	printf ("%d\n",kolvoPlus);
	
	printf ("%d",kolvoMinus);

	return 0;
}
