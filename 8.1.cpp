/*8.1. Crie	uma	fun��o	que	determine	se	um	dado	n�mero	de	entrada	�	primo ou	n�o.
Exemplos	de	sa�da:	
�O	n�mero	X	� primo.�
�O	n�mero	Y	n�o	eh	primo.�*/
#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>
int primo(int);
int nprimo(int);

int main(){
	int num;
	
	printf("Informe um n�mero:\n");
	
	scanf("%d",&num);
	
	setlocale (LC_ALL, "portuguese");

if(num%1==0 && num%num==0){
	 
	  int verificacao=primo(num);
	  
}else{
	int verificacao=nprimo(num);
}
 

}

int primo(int num){
	
	int verificacao = printf("O n�mero %d primo!",num);
    
    return verificacao;
}
int nprimo(int num){
	
	int verificacao= 	printf("O n�mero %d n�o � primo!",num);
	
	return verificacao;
}
	 	
