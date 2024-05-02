#include<stdio.h>
#include<string.h>
#include "listaPilha.h"
struct compra{
	char ativo;
	char nome[50]
	int qtd;
	float valor;
};
int main(){
	FILE* arquivo = fopen("compras.bin","ab+");
	if(arquivo == NULL){
		printf("Erro na abertura do arquivo");
		system("pause");
		exit(1);
	}
	
	
	//percorrer o arquivo
	//
	fclose(arquivo);
	return 0;
}
