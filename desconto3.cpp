#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	int idade1;
	int idade2;
	
	printf("Saiba se voc� ter� desconto. Se uma das idades for par, ter� desconto: \n");
	
	printf("Insira a primeira idade: ");
	scanf("%d", &idade1);
	
	printf("Insira a segunda idade: ");
	scanf("%d", &idade2);
	
	if (idade1 %2 ^ idade2 %2) {
		printf("Desconto");
	}
	
	return 0;
}
