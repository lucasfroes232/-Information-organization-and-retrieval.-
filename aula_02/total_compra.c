#include <stdio.h>
//LER A COMPRA DE UM ARQUIVO E RETORNAR VALOR total da compra
int main(){
	int qtdProd;
	float valorProd,total = 0;
	char nome[30];
	FILE *fp;
	fp = fopen("compra.txt","r");//caminho relativo, leitura de texto
	if(fp == NULL){
		printf("Erro na abertura.\n");
		system("pause");
		exit(1);// != 0 pq deu erro
	}
	while(1){
		if(fscanf(fp,"%s%d%f",nome,&qtdProd,&valorProd) != 3)
			break;
		total = total + valorProd * qtdProd;
	}
	fclose(fp);//fechar arquivo,recebe o arq como parametro
	printf("Total da compra = %f\n",total);
	return 0;

}
// perguntar diferença de uso do fclose e exit em relação ao buffer
	// exit destroi o programa(instrução diferente no kernel),close encerra o programa
//fwrite e fread nao pode pra string?
	//pode sim
//slide 57 pq &x
	//endereço
//leitura
