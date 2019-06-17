
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ITEM 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int c, i, index;
    // Vetores para guardar os item cadastrados
    char strModelo[10][50];
    char strMarca[10][50];
    float fValor[MAX_ITEM];
    int qtdItens = 0; //variavel global

    do
    {
        //chama funcao para mostrar menu
        printf("\n (1) Cadastrar Item");
        printf("\n (2) Alterar Item");
        printf("\n (3) Remover Item");
        printf("\n (4) Listar Itens");
        printf("\n (5) Sair");
        scanf("%d", &c); ////pega a tecla selecionada no teclado

        switch (c)
        {

        case 1:
            printf("\nCadastro de Veiculos %d:", qtdItens + 1);
            printf("\n Marca do Veiculo:");
            scanf("%s", strMarca[qtdItens]);
            printf("\n Modelo do Veiculo:");
            scanf("%s", strModelo[qtdItens]);
            printf(" Valor do veiculo:");
            scanf("%f", &fValor[qtdItens]);
            qtdItens++;

            printf("\n Cadastro realizado com sucesso!");
            break;
        case 2:
            printf("Alterar");
            break;
        case 3:
            /*
                Melhor remover por um índice inteiro, pois isso vai facilitar conforme seu vetor
            */

            // Liste aqui antes todos os seus itens cadastrados
            // índice do vetor (entenda como código) - Marca - Modelo - Valor
            // Em seguinda o pedido de remoção é pelo índice

            printf("Remover\n");
            printf("Digite o código do item a ser removido ()\n");
            scanf("%d", &index);
            /*
                Verifique este site: http://linguagemc.com.br/a-biblioteca-string-h
                As funcoes da biblioteca String.h vão lhe ajudar.
            */
            
            for (i = 0; i < MAX_ITEM; i++)
            {
                // Compara as Strings, sendo iguais strcm devolve 0
                if (i == index)
                {
                    strncpy(strModelo[index],"", 50);
                    strncpy(strModelo[index],"", 50);
                    fValor[index] = -1;
                }
            }
            printf("Removido com Sucesso!\n");

            //system("pause");

            break;
        case 4:
            printf("Listar veiculos");
            // arrumei aqui, vcs usaram a variavel global qtdItens no if, o que destruia o controle
            // dos itens já inseridos. Busquem entender como o programa está funcionando!
            // Veja que agora o FOR vai de i=0 até a variável qtdItens, que no case de cadastro conta quantos itens foram 
            // inseridos.
            printf("\n#Marca\t\tModelo\t\tValor do veiculo");
            for (i = 0; i < qtdItens; i++) {
                //vamos entender que se o veiculo foi apagado, seu valor é -1.
                if (fValor[i]!=-1){
                    printf("\n%s\t\t%s\t\t%f", strMarca[i], strModelo[i], fValor[i]);
                }
                //printf("\nMarca:%s\t\t modelo:%s\t\tvalor do veiculo:%f", strMarca[i], strModelo[i], fValor[i]);
            }
            //system("pause");
            //system("cls");

            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao Invalida");
            break;
        }
    } while (c != 5);

    return 0;
}
