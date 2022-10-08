#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int i;
	do{
	
	printf("\n digite um numero para escolher um sabor ");
	printf("\t (1) flocos ");
	printf("\t (2) morango  ");
	printf("\t (2) abacaxi");

	scanf ("%d" , &i);

	
}	while (i<1 || i>3);
	switch (i){
	
	case 1:
	printf ("voce esconlheu flocos");
	break;
	
	case 2:
	printf ("voce esconlheu morango");
	break;
	case 3:
	printf ("voce esconlheu abacaxi");
	break;}
	
	
	return 0;
}
