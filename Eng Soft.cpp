#include <stdio.h>
#include <string.h>
#define lim 1000
float TOTAL=0;
char maiusculo (char texto[]){
	int i;
	
	for(i=0;i<strlen(texto);i++){
		if(texto[i]>96 && texto[i]<123){
			texto[i]=texto[i]-32;
		}
		else
		texto[i]=texto[i];
	}
}
// ocorrências de um caractere na string
int char_count(const char *str, char caractere){
  int i,j, quant = 0;
  float pro,p;
	
  // percorrer a string

	for(i = 0; str[i]; i++){
    	if(str[i] == caractere){ 
      	quant++;
    	}
}
  
  		printf("%c: ",caractere);

  		for(j=1;j<=quant;j++){
		  	printf("-");
   	  }
	
		p=quant;
   	  	
	//	pro=(p)/(TOTAL);
		
		printf(" (%d)",quant);
   	  printf("\n");


		
}

int main (){
	char texto[lim];
	char ch='A',cn='0',CH='A',CN='0';
	int j,i,t;
	char fim[1000000],local[lim];
		
	fgets(local,lim,stdin);
	strcat(fim,local);
	for(t=0;t<1000;t++){
		
		fgets(texto,lim,stdin);
		
		if(texto[0]=='F' && texto[1]=='I' && texto[2]=='M'){
			break;
			
		}
		else{
		
		strcat(fim,texto);
		}	
}
		
	maiusculo(fim);
	for(j=0;j<26;j++){	
	for(i = 0; fim[i]; i++){
    		if(fim[i] == ch){
		TOTAL++;
    		}
	}
	ch++;
	}
	for(j=0;j<10;j++){
	for(i = 0; fim[i]; i++){
    		if(fim[i] == cn){
		TOTAL++;
    		}
	}
	cn++;
	}

	printf("Caracteres:\n");
	for(j=0;j<26;j++){
		char_count(fim,CH);
			CH++;
		}
	
	printf("\nDigitos:\n");
	for(i=0;i<10;i++){
		char_count(fim,CN);
		CN++;	
	}
}
