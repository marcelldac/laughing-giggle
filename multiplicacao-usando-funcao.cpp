#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Programa simples de multiplica��o de inteiros usando fun��es em C
int func_mult (int a1, int a2){
	
	int result;
	result = a1 * a2;
	return result;
}

int main(void){
	setlocale(LC_ALL,"");
	
	int i, a, b;
	
	printf("Digite um n�mero: %d", i);
	scanf("%d", &i);
	printf("Digite outro n�mero: %d", a);
	scanf("%d", &a);
	
	b = func_mult(i,a);
	
	printf("O resultado da opera��o �: %d", b);
	
	return 0;
}
