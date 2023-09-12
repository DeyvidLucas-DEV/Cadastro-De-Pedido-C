#include<stdio.h>
#include<stdlib.h>



int main(void){
	
	char nome[30], endereco[30], telefone[10], pedido[90]; 
	int quantidade;
	
	
	printf("Nome do cliente: \n");
	fflush(stdin);
	gets(nome);
	
	printf("Digite o endereco do clinte: \n");
	fflush(stdin);
	gets(endereco);
	
	printf("Telefone do cliente: \n");
	fflush(stdin);
	gets(telefone);
	
	printf("Qual o seu pedido? \n");
	fflush(stdin);
	gets(pedido);
	
	printf("Qual a quantidade de pedidos?\n");
	fflush(stdin);
	scanf("%i", &quantidade);
	
	printf("_________________FINALIZADO______________\n");
	
	
	printf("O nome do cliente e: %s \n", nome);
	printf("O endereço do cliente e: %s \n", endereco);
	printf("O telefone do cliente e: %s \n", telefone);
	printf("A quantidade de pedidos foi: %d \n", quantidade);
	
	
	
	system("pause");
	return 0;
}
