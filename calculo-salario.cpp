#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float salario, inss, ir, salario_liq;
	printf( " digite seu salario");
	scanf ("%f" , & salario);
	if (salario <= 1500){
	
	inss = (salario * 0.10);
      }
      else
	   if (salario >= 1501 && salario <=2000)
	   {
	  
    inss = (salario * 0.20);
    
	  }
	  salario_liq = (salario-inss) -ir;
	  printf("\ desconto no inss: %f",inss);
	  printf(" \n seu salario liquido é: %f\n", salario_liq );
	
	 
	return 0;
	 
}
