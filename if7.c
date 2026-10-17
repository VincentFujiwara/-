// Задачник Абрамяна - задача If7
//
//Даны два числа. Вывести порядковый номер меньшего из них
// 
// Решение Урсу Артёма

#include <stdio.h>
int main (){
	int a,b;
	scanf("%d %d",&a,&b);
	if (a>b){
		printf ("%d",1);
	}
	else {
		printf ("%d",2);
	}
	return 0;
}
