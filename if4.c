// Задачник Абрамяна - задача If4
//
//Даны три целых числа. Найти количество положительных чисел в исходном наборе.
// 
// Решение Урсу Артёма


#include <stdio.h>
int main (){
	
	int n1,n2,n3,kolvo;
	kolvo = 0;
	
	if (scanf ("%d %d %d",&n1,&n2,&n3) !=3){
	return 1;
	}
	
	if (n1>0) {
	kolvo++;
	}
	
	if (n2>0) {
	kolvo++;
	}

	if (n3>0) {
	kolvo++;
	}




	return 0;
}
