// Задачник Абрамяна - задача If8
//
//Даны два числа. Вывести вначале большее, а затем меньшее из них
// 
// Решение Урсу Артёма

#include <stdio.h>
int main (){
	int a,b;
	scanf("%d %d",&a,&b);
	if (a>b){
		printf ("%d\n",a);
			printf ("%d",b);
	}
	else {
		printf ("%d\n",b);
			printf ("%d",a);
	}
	
	return 0;
}
