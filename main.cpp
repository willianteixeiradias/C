#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char nome [30];
	char endereco [30];
	int idade ;
	int idade2 ;
	printf("digite seu nome \n");
	scanf("%s", &nome);
	printf("digite seu endereco \n");
	scanf("%s" , &endereco);
	printf("digite a sua idade");
	scanf("%d", & idade);
	
	printf ("\n nome : %s", nome);
	printf ("\n nome : %s", endereco);
	printf ("\n nome : %d", idade);
	return 0;
}
