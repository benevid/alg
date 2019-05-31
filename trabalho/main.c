#include <stdio.h>

// numero de itens no vetor estoque
#define MAX_ITEM 10

int main() {
    int c;
    // Vetores para guardar os item cadastrados
    char strDesc[MAX_ITEM][50];
    int intQuant[MAX_ITEM];
    float fValor[MAX_ITEM];
    int  qtdItens = 0; //variavel global
    
     do {
  		//chama funcao para mostrar menu
        printf("\n (1) Cadastrar Item");
        printf("\n (2) Alterar Item");
        printf("\n (3) Remover Item");
        printf("\n (4) Listar Itens");
        printf("\n (5) Sair\n");
        scanf("%d",&c); ////pega a tecla selecionada no teclado

       switch(c) {
            
            case 1:    
                    printf("\nCadastro de Itens:");
                    printf("\n Descricao.:");
                    scanf("%s", strDesc[qtdItens]);
                    printf(" Quantidade.:");
                    scanf("%d", &intQuant[qtdItens]);
                    printf(" Valor.:"); 
                    scanf("%f", &fValor[qtdItens]);
                    qtdItens++;
                    printf("\n Cadastro realizado com sucesso!");
                    break;
            case 2:
                      printf("Alterar");
                      break;
            case 3:
                      printf("Remover");
                      break;
            case 4:
                     printf("Listar");
                     break;
            case 5:
                    printf("Saindo...\n");
                    break;
            default:
                  printf("Opcao Invalida");
               break;
           }
        }while(c!=5);
        return 0;
}