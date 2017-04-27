#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int menu, cont=0;
	char letra;
	printf("Programa:\n1-mostrar de 1 ao 20 \n2-de 30 a 1 \n3-pares de 0 a 50\n4-a tabuada do 9 \n5-digitar qualquer caracter ou s para sair");
	printf("\nDigite qual programa voce quer");
	scanf("%i",&menu);
	if(menu==1){
		cont=1;
		while(cont<=20){
			printf("\n%i",cont);
			cont=cont+1;
		}
	}
	else{
		if(menu==2){
			cont=30;
			while(cont>=1){
				printf("\n%i",cont);
				cont=cont-1;
			}
		}
		else{
			if(menu==3){
				cont=0;
				while(cont<=50){
					printf("\n%i",cont);
					cont=cont+2;
				}
			}
			else{
				if(menu==4){
					cont=0;
					while(cont<=10){
						printf("\n9x%i=%i",cont, cont*9);
						cont=cont+1;
					}
				}
				else{
					if(menu==5){
						fflush(stdin);
						while(letra!='s'){
							printf("Digite qualquer caracter ou s para sair");
							scanf("%c",&letra);
							fflush(stdin);
						}
					}
					else{
						if((menu<1)||(menu>5)){
							printf("O programa nao existe");
						}
					}
				}
			}
		}
	}
	return 0;
}
