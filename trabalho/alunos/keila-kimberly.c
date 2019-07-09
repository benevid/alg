/*
    Tema Trabalho: Loja de Sapatos
    Integrantes:
	            Keila Guedes da Silva
                Kimberly Larissa Santana da Cruz
    Editor utilizado: Dev-C++
    Sistema Operacional Utilizado: Windows 10
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{	
	char strDesc [30][30]; //Descrição
    int intQuant [30], cont[30]; //Quantidade - //Contador 
    float fValor [30]; //Valor 
    int c,i;
    int qtdItens = 1; //Quantidade de itens

    do{
        system("color E1");
        printf("----------------------------------------------------------\n");
		printf("\t\tLoja de sapatos K & K");
		printf("\n----------------------------------------------------------\n");
        printf("\n (1) Cadastrar Item");
        printf("\n (2) Alterar Item");
        printf("\n (3) Remover Item");
        printf("\n (4) Listar Itens");
        printf("\n (5) Sair\n\n");
        scanf ("%d", &c);

        switch (c) {

            case 1://cadastrar Itens
            	      system("cls");
					  printf("\nCadastrar Item %d", qtdItens);
					  printf("\n--------------------\n");
            	      printf("\nDescricao:\n");
					  scanf("%s", &strDesc[qtdItens]);
					  printf("\nQuantidade:\n");
					  scanf("%d", &intQuant[qtdItens]);
					  printf("\nValor do Item R$:\n");
					  scanf("%f", &fValor[qtdItens]);
					  cont[qtdItens]=qtdItens;				  
					  qtdItens++;
					              	
                printf("\n Cadastro realizado com sucesso!\n\n\n");
                system("pause");
                system("cls");
                            break;
                            
                case 2: //Alterar
                		system("cls");
                		printf("\nEscolha o numero do item que deseja alterar:"); //buscar o item no vetor
                		printf("\n---------------------------------------------\n");
                	    scanf("%d", &c);
                	    printf("\nDescricao: %s \n", strDesc[c]);
                			printf("Quantidade: %d \n", intQuant[c]);
                			printf(" Valor: %2.f \n\n", fValor[c]); //Mostrar os produtos que seram alterados
                			printf("\nNova descricao: \n");
                			scanf("%s", &strDesc[c]);
                			printf("\nNova Quantidade: \n"); //alterar
                			scanf("%d", &intQuant[c]);
                			printf("\nNovo Valor: \n");
                			scanf("%f", &fValor[c]);
                	    printf("\n Sua alteracao foi completada com sucesso!!\n\n\n");
                	    system("pause");
						system("cls");  
                        break;
                        
                case 3://Remover
                        system("cls");
                		printf("Remover\n");
                		printf("\nEscolha o numero do item que deseja Remover:");
                		printf("\n---------------------------------------------\n");
                	    scanf("%d", &c);
                	    printf("\nItem Removido:\n");
                	    printf("\nDescricao: %s \n", strDesc[c]); //Mostra o produto que foi removido
                			printf("\nQuantidade: %d \n", intQuant[c]);
                			printf("\nValor: %2.f \n\n", fValor[c]);
							strcpy(strDesc[c], "ITEM NAO LISTADO"); 
							intQuant[c]=0;	
							fValor[c]=0;
                	    printf("\n Sua remocao foi completada com sucesso!!\n\n\n");
                	   cont[c]=99;
                	    system("pause");
						system("cls");
                        break;
                        
                case 4://Listar
                	system("cls"); 
                        printf("Exibir Produtos");
                        printf("\n---------------\n");
					for (i=1; i<qtdItens;i++){ 
						printf("%d produto\n", i);
						if(cont[i]==99){
							printf("\nItem %d foi removido !\n", i); 
						}
						else{
                            printf("Descricao: %s \n", strDesc[i]); //Mostrar os produtos cadastrados
                			printf("Quantidade : %d \n", intQuant[i]);
                			printf("Valor : %2.f \n", fValor[i]);
                			printf("\n");						}
                		}
                		system("pause");
                		system("cls");
                		
                       break;
                       
                case 5://Sair

                       printf("Saindo....\n");
                       break;

                default:
                       system("cls");
                       printf("\tQue pena, opcao invalida :(\n");
                       printf("\n\tEscolha outra opcao no menu inicial.\n");
                       printf("\n\n");
                       system("pause");
                       system("cls");
                       break;
    }
      
   }while(c!=5);
   
  return 0;
}
