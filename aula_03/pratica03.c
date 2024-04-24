#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char *buffer,*produto;
  int tamRegistro,quantidade;												
  float preco, total = 0;
  FILE* arquivo;
  
  arquivo = fopen("compras.txt", "r");

  if(arquivo == NULL){
    printf("Erro ao abrir o arquivo\n");
    system("pause");
    exit(1);
  }
  tamRegistro =fgetc(arquivo);
  buffer =(char*)malloc(sizeof(char)*tamRegistro);
  if(buffer == NULL){
   printf("Falha ao alocar  memoria\n");
   exit(1);
   }
  while(fread(buffer,tamRegistro,1,arquivo)==1){
		//separar os campos do registro nas variaveis corretas
		produto = strtok(buffer,"|");
		//printf("%s\n",produto);			
		quantidade = atoi(strtok(NULL,"|"));
		//printf("%d\n",quantidade);
		preco = atof(strtok(NULL,"|"));
		printf("%f\n",preco);
		//calcular total
		total += (preco*quantidade);
		//voltar pro laco
  	tamRegistro =fgetc(arquivo);
  	free(buffer);
  	buffer=(char*)malloc(sizeof(char)*(tamRegistro));
  	
  }
  printf("%.2f\n",total);
   
  fclose(arquivo);
  return 0;
}
