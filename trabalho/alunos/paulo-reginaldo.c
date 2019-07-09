// controle de frota
// trabalho 2� semestre sistemas  de informacao-2019/1
// grupo
//Reginaldo de Freitas Avelino
//Paulo H. A. Geraldi




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ITEM 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int c, i,index,codigo,j,k;
    // Vetores para guardar os item cadastrados
    char strModelo[10][50];
    char strMarca[10][50];
    float fValor[MAX_ITEM];
    int qtdItens=0 ; //variavel global

    do {
        //chama funcao para mostrar menu
        printf("\n (1) Cadastrar Item");
        printf("\n (2) Alterar Item");
        printf("\n (3) Remover Item");
        printf("\n (4) Listar Itens");
        printf("\n (5) Sair\n");
        scanf("%d", &c); ////pega a tecla selecionada no teclado

        switch (c) {
                     case 1:
                     	
                     
					 
							 	 
					 printf("\nCadastro de Veiculos %d:", qtdItens+1); // bloco de instrucao que vai receber os valores do vetores
                     printf("\nMarca do Veiculo:\t");
                     scanf("%s",strMarca[qtdItens]);
                     printf("\nModelo do Veiculo:\t");
                     scanf("%s",strModelo[qtdItens]);
                     printf("\nValor do veiculo:\t");
                     scanf("%f",&fValor[qtdItens]);
                     qtdItens++;
                     
                
                 
                 
				 	 fflush(stdin);
                 

            
                       /// Bom colocar o fflush para limpar o buffer do teclado
                     /// Assim não fica sujeiro que o usuário digitou
                    

                      break;
                    
					 case 2:
					 	printf("Alterar");
                     	

                    
					 printf("Listar veiculos"); //inica o case para informar o que sera feito//
    
               // printf("\ni\tMarca\t\tModelo\tValor do veiculo"); // a ordem que os vetores serao impressos na tela//

                         printf("\ni\tMarca\tModelo\tValor do veiculo");
                for (j = 0; j < qtdItens; j++) { // inicio do for para percorer os vetores e mostrar linha a linha os valores 
                    
                    if (fValor[j]!=-1) { // condicao para ipressao
                    
                        printf("\n%d\t%s\t%s\t%.2f\n",j ,strMarca[j], strModelo[j], fValor[j]);
                    }                  
                }
                        for(codigo=0;codigo<10;codigo++){
					
						 printf("\n\n\ninforme o indice a ser alterado:"); // pede do usuario qual indice quer alterar
                         scanf("%d",&codigo);
                         
						 if(codigo<10){ // controla o tanto de codigos que serao alterados
						 
                         	
						 printf("informe a nova marca:\t");      // os printf aqui pede do usuario o que quer que seja feito.
                         scanf("%s",strMarca[codigo]);          // os scanf(captura e ja atribui ao vetor o valor novo.
						  
						 printf("Digite o novo modelo:\t");
                         scanf("%s",strModelo[codigo]);
                         
                         printf("Digite o novo preco:\t");
                         scanf("%f",&fValor[codigo]);
                        
					
						  
						  printf("\n\nalterado com sucesso");
						  } 
						  else{ 
						  
						  
						  printf("\n\ncodigo invalido, tente novamente\n\n");
                           }
                       }
                     break; 
                     
                     case 3:
                // captura o valor do indice que sera removido
                printf("Remover\n");
                  
				  
				  printf("Listar veiculos"); //inica o case para informar o que sera feito//
    
               // printf("\ni\tMarca\t\tModelo\tValor do veiculo"); // a ordem que os vetores serao impressos na tela//

                         printf("\ni\tMarca\tModelo\tValor do veiculo");
                for (j = 0; j < qtdItens; j++) { // inicio do for para percorer os vetores e mostrar linha a linha os valores 
                    
                    if (fValor[j]!=-1) { // condicao para ipressao
                    
                        printf("\n%d\t%s\t%s%.2f\n",j ,strMarca[j], strModelo[j], fValor[j]);
                    }                  
                }
			 
                
				printf("Digite o codigo do item a ser removido \n"); // informar qual indice deseja remover
                scanf("%d", &index);
                
                  for (i = 0; i < MAX_ITEM; i++) {
                    if (i == index) {
                        strncpy(strModelo[index],"", 50);
                        strncpy(strModelo[index],"", 50);
                        fValor[index] =-1;
                    }
                }

                printf("Removido com Sucesso!\n");

                //system("pause");
                fflush(stdin);

                break;
            
			
			
			case 4:
                printf("Listar veiculos"); //inica o case para informar o que sera feito//
    
                printf("\nMarca\tModelo\tValor do veiculo\n"); // a ordem que os vetores serao impressos na tela//

                for ( i= 0; i < qtdItens; i++) { // inicio do for para percorer os vetores e mostrar linha a linha os valores 
                    
                    if (fValor[i]!=-1) { // condicao para ipressao
                        printf("%s\t%s\t%.3f\n",strMarca[i],strModelo[i],fValor[i]);
                    }
                    
                }  
				            

                break;
             case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao Invalida");
                fflush(stdin);
                break;
            }
        } while (c != 5);

        return 0;
}
