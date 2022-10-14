#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int idade;
	
	printf("Saiba se você é maior de idade \n");
	
	printf("Insira a sua idade: ");
	scanf("%d", &idade);
	
	if (idade >= 18) {
		printf("Maior de idade. \n");
	}
	
	if (idade < 18) {
		printf("Menor de idade. \n");
	}
	
	if (idade % 2 == 0) {
		printf("A idade é par.");
	}
	
	if (idade % 2 !=0) {
		printf("A idade é ímpar.");
	}
	
	return 0;
}
