/*8.1. Crie	uma	função	que	determine	se	um	dado	número	de	entrada	é	primo ou	não.
Exemplos	de	saída:	
“O	número	X	é primo.”
“O	número	Y	não	eh	primo.”*/
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int primo(int);
int nprimo(int);

int main(){
	int num;
	
	printf("Informe um número:\n");
	
	scanf("%d",&num);
	
	setlocale (LC_ALL, "portuguese");

if(num%1==0 && num%num==0){
	 
	  int verificacao=primo(num);
	  
}else{
	int verificacao=nprimo(num);
}
 

}

int primo(int num){
	
	int verificacao = printf("O número %d primo!",num);
    
    return verificacao;
}
int nprimo(int num){
	
	int verificacao= 	printf("O número %d não é primo!",num);
	
	return verificacao;
}
	 	
