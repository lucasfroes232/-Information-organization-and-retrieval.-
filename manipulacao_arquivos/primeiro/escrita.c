#include<stdio.h>
#include<string.h>

int main(){
	char inp;
	
	//===========================================//
	FILE *f = fopen("arq.txt","w");
	if(f == NULL){
		printf("Erro ao criar arquivo");
		system("pause");
		exit(1);
	}
	
	printf("Digite um caracter:\n");
	scanf(" %c",&inp);
	while(inp != '0') {
		fputc(inp,f);
		fputc('\n',f);
		printf("Digite um caracter:\n");
		scanf(" %c",&inp);
	}
	
	
	fclose(f);
	return 0;
}
