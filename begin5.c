// Задачник Абрамяна - задача begin5
//
//Дана длина ребра куба a. Найти объем куба V = a^3 и площадь его
//поверхности S = 6·a^2
//
// Решение Урсу Артёма


#include <stdio.h>
int main (){
	
	int a,v,s;
	
	scanf("%d",&a);
	
	v = a*a*a;
	s = a*a*6;
	
	printf ("%d\n",v);
	printf ("%d",s);
	
	return 0;
}
