#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int idade;
	int student;
	
	printf("Saiba se voc� tem desconto. Estudantes e idosos t�m desconto: \n");
	
	printf("Insira a primeira idade: ");
	scanf("%d", &idade);
	
	printf("Voc� � estudante? \n Digite 1 para: Sim; \n Digite 0 para: N�o; \n");
	scanf("%d", &student);
	
	if ((idade >= 65) ^ (student)) {
		printf("Meia entrada");
	}
	
	return 0;
}
