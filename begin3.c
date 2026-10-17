// Задачник Абрамяна - задача begin3
//
// Даны стороны прямоугольника a и b. Найти его площадь 
// S = a·b и периметр P = 2·(a + b).
//
// Решение Урсу Артёма


#include <stdio.h>
int main (){
	int s,a,b,p;
	scanf ("%d %d",&a,&b);
	s = a*b;
	p = (a+b)*2;
	printf ("%d\n",s);	
	printf ("%d",p);
	
	return 0;
}
