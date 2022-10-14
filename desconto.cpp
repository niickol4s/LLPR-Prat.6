#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int idade;
	int student;
	
	printf("Saiba se você tem desconto. Estudantes e idosos têm desconto: \n");
	
	printf("Insira a primeira idade: ");
	scanf("%d", &idade);
	
	printf("Você é estudante? \n Digite 1 para: Sim; \n Digite 0 para: Não; \n");
	scanf("%d", &student);
	
	if ((idade >= 65) ^ (student)) {
		printf("Meia entrada");
	}
	
	return 0;
}
