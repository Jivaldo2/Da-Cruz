#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define size 200

//Variável global
struct langua{
	char port[size];
}idiomas[size] = {"Oi", "Ola", "Bom", "Muito", "Louco", "Ainda", "Sentir", "Paixao", "Familia", "Amar"};
struct language{
	char ing[size];
}idioma[size] = {"Hi", "Hello", "Good", "Very", "Crazy", "Still", "Feel", "Passion", "Family", "Love"};
int x, y, tenta;

int main(void){
	
	printf("########################################################\n\n                Bem-Vindo a Dicionario Ing             \n\n########################################################\n\n");
	printf("1. - Para Portugues Ingles.\n2. - Para Ingles Portugues.\n3. - Para sair.\n");
	int opcao;
	printf("Insira uma opcao: ");
	scanf("%d",&opcao);
	if(opcao == 1){
		void porting(void);
		porting();
		system("cls");
	}else if(opcao == 2){
		void ingport(void);
		ingport();
		system("cls");
	}else{
		system("cls");
		printf("########################################################\n\n                Obrigado pela visita.             \n\n########################################################\n\n");
	}
	
	system("pause");
	return 0;
}

//Dicionário português para inglês
//
void porting(void){
	char portu[size];
	do{	
	printf("Insira uma palavra: ");
		scanf("%s", &portu);
	for(x = 0, y = 0; y < 10, x < 10; x++, y++){
		if(strcmp(portu,idiomas[x].port) == 0){
			printf("A traducao de %s para o ingles eh %s.\n", portu, idioma[y].ing);
		}
	}
		printf("Insira 1 para continuar e 0 para sair: ");
		scanf("%d", &tenta);
		system("cls");
		printf("########################################################\n\n                Bem-Vindo a Dicionario Ing             \n\n########################################################\n\n");
	}while(tenta == 1);
}

//Dicionário de Inglês para Português
//
void ingport(void){
	char ingl[size];
	do{
		printf("White a word in ingles: ");
		scanf("%s", &ingl);
		for(x = 0, y = 0; x < 10, y < 10; x++, y++){
			if(strcmp(ingl,idioma[x].ing) == 0){
				printf("A traducao de %s para portugues eh %s.\n", ingl, idiomas[y].port);
			}
		}
		printf("Insira 1 para continuar e 0 para sair: ");
		scanf("%d", &tenta);
		system("cls");
		printf("########################################################\n\n                Bem-Vindo a Dicionario Ing             \n\n########################################################\n\n");
	}while(tenta == 1);
}
