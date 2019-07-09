/*
    Tema do Trabalho: Vestuário
    Alunos: Erika Damasceno
            Gabriel Henrique Gottardo
	Dificuldades encontradas: Pequenas funções de Switch
    Editor utilizado: Dev-C++
    Sistema Operacional Utilizado: Windows 10
*/

#include <stdio.h>
#include <stdlib.h> // Alocação de memória, controle de processos, conversões e outras.
#include <string.h> // Manipulação de cadeias de caracteres e regiões de memória
int main()
{
	
 int c,i;
 int q[20];         //Quantidade
 int cont[20];      //Contador
 int qt = 1;        //Quantidade de itens -variável global
 float v[20];       //Valor
 char d[20][20];    //Descrição

 do{
    system(" color 8F       ");
    printf(" _________      ");
    printf("\n|         |   ");
	printf("\n Vestuario    ");
    printf("\n|         |\n ");
	printf("_________\n\n\n ");
	
    printf("\n (1) Cadastrar Item ");
    printf("\n (2) Alterar Item   ");
    printf("\n (3) Remover Item   ");
    printf("\n (4) Listar Itens   ");
    printf("\n (5) Sair           ");
    scanf ("%d", &c);

    switch (c) {

        case 1: //Cadastro de itens
                system("cls"); // Comando que limpa a tela
             
			    printf("\n Cadastrar Item %d \n", qt);
            	       
			    printf("\n Descricao do item: \n");
				scanf ("%s", &d[qt]              );
					  
				printf("\n Quantidade: \n");
				scanf ("%d", &q[qt]       );
					  
				printf("\n Valor do item em reais(R$): \n");
				scanf("%f", &v[qt]                        );
					  
				cont[qt]=qt;				  
				qt++;
					              	
                printf("\n Cadastro realizado com sucesso! \n\n");
                      
                system("pause"); // Interrompe a execução do programa para a análise, pacote - stdlib.h
                system("cls");
                break;
                            
        case 2: //Alteramento de itens
                system("cls");
             
                printf("\n Escolha o numero do item que deseja alterar! \n"); // busca o item pela posição que está guardado no VETOR!
                scanf("%d", &c);
                	    
                printf("descricao: %s \n", d[c] );
                printf("Quantidade: %d \n", q[c]);
                printf("Valor: %2.f \n", v[c]   ); // Mostra os produtos
						 
                ("\n Nova descricao!: \n ");
                scanf("%s", &d[c]      );
                
                printf("\n Nova Quantidade: \n");
                scanf("%d", &q[c]              );
                
                printf("\n Novo Valor em reais(R$): \n");
                scanf("%f", &v[c]                      ); //altera os itens
                		
                printf("\n Alteracao efetuada com sucesso! \n\n");
                	    
                system("pause");
				system("cls");  
                break;
                        
        case 3: //Remove
                system("cls");
                printf("\n Remover \n");
                		
                printf("\n Escolha o numero do item que deseja Remover! \n");
                scanf("%d", &c);
                printf("Item Removido!\n");
                	    
                printf("descricao: %s \n", d[c]);
                printf("Quantidade : %d \n", q[c]);
                printf("Valor em reais(R$)) : %2.f \n\n", v[c]);
                		
				strcpy(d[c], "ITEM NAO LISTADO!\n ");
				/* strcpy copia o conteúdo de uma string para outra e coloca um termi-
				nador de string. Sua sintaxe é strcpy (destino, origem) - RECEBE VALOR
				*/
				q[c]=0;	
				v[c]=0;
						
                printf("\n Remocao completa! \n\n");
                cont[c]=50;
                
                system("pause");
				system("cls");
                break;
                        
        case 4: //Listar
                system("cls"); 
                printf("Lista \n");
                    
				for (i=1; i<qt ;i++){
				printf("%d produto \n", i);
				if(cont[i]==50){
							    printf("Item %d removido! \n", i);
						        }
				else{
                     printf("descricao: %s \n", d[i]  );
                	 printf("Quantidade: %d \n", q[i] );
                	 printf("Valor: %2.f \n", v[i]    );
                	 printf("\n");						
					}
                		            }
                break;
        case 5: //Sair - Encerrando o programa

                printf("Saindo...\n");
                break;

                default:

                       printf("\n Opção Inválida! \n");
                       break;
               }
      
   }while(c!=5); // enquanto o N° digitado for diferente de (5) o Looping continua!
   
  return 0;
}
