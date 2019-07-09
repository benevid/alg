/* 	Tema do trabalho: Cadastro de CLientes
	Integrantes: Alidaiane Marinho. Allan Finger Candido.
	Dificuldades encontradas: Possibilitar ao usuário escrever strings com
	espaço entre as palavras. Foi necessário usar o getchar() para capturar o
	/n no final do printf e o comando getchar() para escanear as strings
	Editor utilizado: CodeBlocks e Dev C++
	Sistema Operacional Utilizado: Windows */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 //numero máximo de entradas no cadastro
#define MAX_ITEM 30
// Vetores para guardar os item cadastrados
#if defined (_WIN32) || defined(_WIN64)
	const char* limpar = "cls";
	#else
	const char* limpar = "clear";
#endif
	int i=0;
	int qtdItens=0;
	int c,k,j;
	int l=0;
	char nome[MAX_ITEM][51], cpf[MAX_ITEM][16], telefone[MAX_ITEM][15], sexo[MAX_ITEM][2],datanasc[MAX_ITEM][12];
	char rua[MAX_ITEM][51],numero[MAX_ITEM][6],bairro[MAX_ITEM][51],cidade[MAX_ITEM][51],estado[MAX_ITEM][3];
	char alteracao[51];

void cadastrar(){
	printf("\n\n-------Cadastrar Clientes:-------");
	printf("\n\nDigite as Informacoes solicitadas:\n");
	printf("\n Nome:");
	getchar();
	gets(nome[i]);
	printf("\n CPF Completo (000.000.000-00): ");
	scanf("%s",cpf[i]);
	printf("\n Sexo [m]asculino [f]eminino: ");
	scanf("%s", sexo[i]);
	printf("\n Data de Nascimento (dd/mm/aaaa): ");
	scanf("%s", datanasc[i]);
	printf("\n Telefone: ");
	scanf("%s", telefone[i]);
	printf("\n Rua: ");
	getchar();
	gets(rua[i]);
	printf("\n Numero: ");
	scanf("%s", numero[i]);
	printf("\n Bairro: ");
	getchar();
	gets(bairro[i]);
	printf("\n Cidade: ");
	gets(cidade[i]);
	printf("\n Estado (UF): ");
	gets(estado[i]);
	qtdItens++;
	printf("\n Cadastro realizado com sucesso!\n\n");
	i++;
}

void alterar(){
	printf("\n\n-------Alteracao de dados:-------\n");
	printf("\nDigite o nome do cliente que deseja alterar: ");
	getchar();
	gets(alteracao);
	for(k=0; k<MAX_ITEM;k++){
		if(alteracao==nome[k]){
			j=k;
		}
	}
	printf("\nO que deseja alterar?");
	 printf("\n (1) Nome");
 	 printf("\n (2) Telefone");
 	 printf("\n (3) Endereco");
 	 printf("\n (4) Cancelar");
 	 printf("\nDigite o numero da opcao desejada: ");
 	 scanf("%d",&c);
		switch (c){
			case 1:
				printf("\nDigite o novo nome: ");
				getchar();
				gets(nome[j]);
				printf("\n Nome alterado com sucesso!\n\n");
				break;
			case 2:
				printf("\nDigite o novo telefone: ");
				getchar();
				gets(telefone[j]);
				printf("\n Telefone alterado com sucesso!\n\n");
				break;
			case 3:
				printf("\nDigite o novo endereco: ");
				printf("\nRua: ");
				getchar();
				gets(rua[j]);
				printf("\nNumero: ");
				gets(numero[j]);
				printf("\nBairro: ");
				gets(bairro[j]);
				printf("\nCidade: ");
				gets(cidade[j]);
				printf("\nUF: ");
				gets(estado[j]);
				printf("\n\nEndereco alterado com sucesso!\n");
				break;
			case 4:
				break;
			default:
				printf("\nOpcao invalida!\n\n");
				break;
		}
}
void remover(){
	printf("\n-------Remocao de dados:-------\n");
	for(k=0;k<i;k++){
		printf("\n(%d) - %s",k,nome[k]);
	}
	printf("\nDigite o codigo do cliente que deseja remover: ");
	fflush(stdin);
	scanf("%d", &l);
			strcpy(nome[l],"Removido");
			
			strcpy(telefone[l]," ");
			
			strcpy(datanasc[l]," ");
			
			strcpy(sexo[l]," ");
			
			strcpy(rua[l]," ");
		
			strcpy(numero[l]," ");
			
			strcpy(bairro[l]," ");
			
			strcpy(cidade[l]," ");
			
			strcpy(estado[l]," ");
			
			strcpy(cpf[l]," ");
			
			printf("\n\nCadastro removido com sucesso!\n\n");
		
}

void listar(){
	printf("\n\nLista dos clientes cadastrados:");
	for(k=0;k<i;k++){
		printf("\n(%d) - %s",k,nome[k]);
	}
	printf("\n\nPara ver os dados completos, digite o numero dele: ");
	scanf("%d",&c);
	printf("\n----------------------------------------");
	printf("\nNome: %s",nome[c]);
	printf("\nTelefone: %s",telefone[c]);
	printf("\nData de Nascimento: %s",datanasc[c]);
	printf("\nCPF: %s",cpf[c]);
	printf("\nSexo: %s",sexo[c]);
	printf("\nEndereco: %s, %s - %s - %s/%s\n\n",rua[c],numero[c],bairro[c],cidade[c],estado[c]);
	printf("\n----------------------------------------\n");
}

int main() {
	system (limpar);
	printf("--------Sistema de Cadastro de Clientes--------\n\n");
	do {
	//chama funcao para mostrar menu
	 	printf("\n--------Menu Principal--------\n\n");
	 printf("\n (1) Cadastrar Cliente");
 	 printf("\n (2) Alterar Cadastro");
 	 printf("\n (3) Remover Cliente");
 	 printf("\n (4) Listar Clientes");
	 printf("\n (5) Sair");
	 printf("\n\nDigite o numero da opcao desejada: ");
	 scanf("%d",&c);
	//pega a tecla selecionada no teclado
 	 switch(c) {
 	 	case 1:
				cadastrar();
 		 	break;
			case 2:
				alterar();
				break;
			case 3:
 			remover();
	 		break;
 		case 4:
 			listar();
 			break;
 		case 5:
				printf("Saindo...\n");
				break;
 		default:
			printf("Opcao Invalida!");
 			break;
		}
	}while(c!=5);
		return 0;
}
