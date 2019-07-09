#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main ()
{	
	char strDesc [30][30];
    int intQuant [30], conta[30];
    float fValor [30];
    int c,i;
    int qtdItens = 1;

    do{
    	        system("color E1");
		printf("\n\n\t CINEMA  \n\n");
        printf("\n 1 -  Cliente \n");
        printf("\n 2 - Administrativo \n");	
		printf("\n 3 - Sair\n\n");	
         scanf ("%d", &c);
         
         switch (c){
		   	case 1:// Cliente
         	printf("\n 1 - Listar Filme");
       		printf("\n 2 - Sair\n\n");
         	scanf ("%d", &c);
         		switch (c){
         			case 1: // Listar 
         			  	system("cls"); 
                        printf("Lista\n");
						for (i=1; i<qtdItens;i++){
						printf("%d Filme\n", i);
						if(conta[i]==100){
						printf("filme %d foi removido !\n", i);
						}
							else{
                           		printf("descricao: %s \n", strDesc[i]);
                				printf("Quantidade : %d \n", intQuant[i]);
                				printf("Valor : %2.f \n", fValor[i]);
                				printf("\n");					}
                		}
                       break;
                    case 2:
                    	c=5;
                    	printf("Saindo....\n");
                    	system("pause");
                       system("cls");
                    	break;
			
				 	default:
				 		printf("\tOpcao Invalida!!\n");
				 		break;
         }
         	case 2:// Administrativo
        	printf("\n 1 -  Cadastrar Filme");
       		printf("\n 2 -  Alterar Filme");
        	printf("\n 3 - Remover Filme");
        	printf("\n 4 - Sair\n\n");
        	scanf ("%d", &c);
        		switch (c)	{
        			case 1: // Cadastrar
        			system("cls");
					  printf("\nCadastrar Filme %d\n", qtdItens);
            	      printf("\nDescricao:\n");
					  scanf("%s", &strDesc[qtdItens]);
					  printf("\nQuantidade:\n");
					  scanf("%d", &intQuant[qtdItens]);
					  printf("\nValor do Ingresso R$:\n");
					  scanf("%f", &fValor[qtdItens]);
					  conta[qtdItens]=qtdItens;				  
					  qtdItens++;
					              	
                printf("\n Cadastro realizado com sucesso!\n\n\n");
                system("pause");
                system("cls");
                    break;
                    
                    case 2: // Alterar
                    system("cls");
                		printf("\nEscolha o numero do filme que deseja alterar \n");
                	    scanf("%d", &c);
                	    printf("descricao: %s \n", strDesc[c]);
                			printf("Quantidade : %d \n", intQuant[c]);
                			printf(" Valor : %2.f \n\n", fValor[c]);
                			printf("Nova descricao: \n");
                			scanf("%s", &strDesc[c]);
                			printf("Nova Quantidade: \n");
                			scanf("%d", &intQuant[c]);
                			printf("Novo Valor: \n");
                			scanf("%f", &fValor[c]);//alterar
                	    printf("\n Sua alteracao foi completada com sucesso!!\n\n\n");
                	    system("pause");
						system("cls");  
                        break;
                        
                    case 3: //remover
                      printf("Remover");
                		system("cls");
                		printf("\nEscolha o numero do filme que deseja Remover: \n");
                	    scanf("%d", &c);
                	    printf("filme Removido:");
                	    printf("descricao: %s \n", strDesc[c]);
                			printf("Quantidade : %d \n", intQuant[c]);
                			printf(" Valor : %2.f \n\n", fValor[c]);
							strcpy(strDesc[c], "REMOVIDO");
                	    printf("\n Sua remocao foi completada com sucesso!!\n\n\n");
                	   conta[c]=100;
                	    system("pause");
						system("cls");
                        break;
                        
                      case 4://Sair
						c=5;
                       printf("Saindo....\n");
                    	system("pause");
                       system("cls");
                       break;

                   	default:

                       printf("\tOpcao Invalida!!\n");
                       break;
		 }

			
	}

   }while(c!=5);
   
  return 0;
}
