#include <stdio.h>
#include <string.h>
int main(){
	FILE *fp = fopen("notas.txt","r");
	if(fp ==NULL){
		printf("Erro ao abrir o arq");
		system("pause");
		exit(1);
	}
	char nome[30],nomeMaior[30];
	float nota,media,maiorNota = 0;
	int qtdNotas = 0;
	
	while(1){
		if(fscanf(fp,"%*s%s%*s%f",nome,&nota)!=2)
			break;
		media = media + nota;
		qtdNotas++;
		if(nota>maiorNota){
			maiorNota = nota;
			strcpy(nomeMaior,nome);
		}
	}
	fclose(fp);
	media = media/qtdNotas;
	printf("Media = %f\n",media);
	printf("Maior nota: %s\n",nomeMaior);
	
	return 0;
	
	
	
}
