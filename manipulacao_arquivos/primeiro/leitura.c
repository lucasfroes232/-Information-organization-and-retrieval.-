#include <stdio.h>
#include <string.h>

int main(){
	char c;
	FILE *f = fopen("arq.txt","r");
	if(f == NULL){
		printf("Erro ao abrir arquivo!");
		system("pause");
		exit(1);
	}
	while(1){
			fscanf(f,"%c",&c);
			if(feof(f))
				break;
			printf("%c",c);
		}
	
	fclose(f);
	return 0;
}
