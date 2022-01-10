#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Programa simples de multiplicação de inteiros usando funções em C
int func_mult (int a1, int a2){
	
	int result;
	result = a1 * a2;
	return result;
}

int main(void){
	setlocale(LC_ALL,"");
	
	int i, a, b;
	
	printf("Digite um número:\n");
	scanf("%d", &i);
	printf("Digite outro número:\n");
	scanf("%d", &a);
	
	b = func_mult(i,a);
	
	printf("O resultado da operação é: %d", b);
	
	return 0;
}
