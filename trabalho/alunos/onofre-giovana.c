//Tema do Trabalho: Programa para cadastramento de cheques pré datados;
//Integrantes: Onofre e Geovana
//Dificuldades encontradas: O template facilitou bastante o start do projeto. Já haviamos criado a consulta e cadastramento antes da ultima versao do template.
//A alteração de itens achamos particularmente dificil dada a necessidade de utilizar outros índices, mas superada esta fase, um pequeno erro no código foi dificil de descobrir.
//Editor Utilizado: Dev C++
//Sistema operacional: Windows 10.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ITEM 10 // Maximo 10 itens podem ser cadastrados.

int main()
{
    int c, i, index; 
    
    // Vetores para guardar os item cadastrados
    char strCPF[10][12];
    char strNome[10][31];
    char strNumCheque[10][7];
    char strBomPara[10][11];
    float fValor[MAX_ITEM];
    int qtdItens = 0; //variavel global

system ("color 2e");//Cores do programa.

printf("\n");
printf("\t###############################################################################\n");
printf("\t#         $$$$$        #                                                      #\n");       
printf("\t#         $:::$        #                                                      #\n");
printf("\t#     $$$$$:::$$$$$$   #    UNEMAT - UNIVERSIDADE DO ESTADO DE MATO GROSSO    #\n");
printf("\t#   $$::::::::::::::$  #                                                      #\n");
printf("\t#  $:::::$$$$$$$::::$  #          CAMPUS UNIVERSITARIO DE SINOP - MT          #\n");
printf("\t#  $::::$       $$$$$  #                                                      #\n");
printf("\t#  $::::$              #          BACHARELADO - SISTEMAS DE INFORMACAO        #\n");
printf("\t#  $::::$              #                                                      #\n");       
printf("\t#  $:::::$$$$$$$$$     #                 DISCIPLINA: ALGORITMO I              #\n");
printf("\t#   $$::::::::::::$$   #                                                      #\n");
printf("\t#     $$$$$$$$$:::::$  #                                                      #\n");
printf("\t#              $::::$  #                                                      #\n");
printf("\t#              $::::$  #       Programa de Cadastro de Cheques Pre Datados    #\n");
printf("\t#  $$$$$       $::::$  #                      Versao 1.0                      #\n");
printf("\t#  $::::$$$$$$$:::::$  #                                                      #\n");
printf("\t#  $::::::::::::::$$   #                                                      #\n");
printf("\t#   $$$$$$:::$$$$$     #              Alunos: Geovanna e Onofre               #\n");
printf("\t#        $:::$         #                                                      #\n");
printf("\t#        $$$$$         #                                                      #\n");
printf("\t###############################################################################\n");

    do
    {

        //chama funcao para mostrar menu
        printf("\n\n\t (1) Cadastrar cheque");
        printf("\n\t (2) Alterar dados do cheque");
        printf("\n\t (3) Remover cheque");
        printf("\n\t (4) Listar cheques");
        printf("\n\t (5) Sair\n\n");
        scanf("%d", &c); ////pega a tecla selecionada no teclado

        switch (c)
        {

        case 1: //Armazena os dados cadastrados no vetor qtdItens
            printf("\nCadastro de Cheques Pre Datados %d:\n", qtdItens + 1);
            printf("\nInforme o CPF do emitente:\n");
            scanf("%s", strCPF[qtdItens]);
            printf("\nInforme o nome do Emitente:\n");
            scanf("%s", strNome[qtdItens]);
            printf("\nInforme o Numero do cheque [6 posicoes]:\n");
            scanf("%s", strNumCheque[qtdItens]);
            printf("\nInforme a data de bom para [formato xx.xx.xxxx]:\n");
            scanf("%s", strBomPara[qtdItens]);                            
            printf("\nInforme o valor do cheque [formato 0.00]:\n");
            scanf("%f", &fValor[qtdItens]);
            qtdItens++;

            printf("\n Alteracao realizada com sucesso!");
            break;
			
        case 2: //Altera os dados cadastrados no vetor, buscando o indice de registro para alteração de cada indice ou registro informado;
            printf("Alterar dados do cheque");
            printf("\n#. Num cheq. Bom para.... Valor.. CPF......... Nome...........................");// Lista os cheques cadastrados primeiros e depois abre para informar qual registro sera alterado.
            for (i = 0; i < qtdItens; i++) {
                if (fValor[i]!=-1){
                printf("\n%d. %s... %s.. %.2f. %s. %s.",i, strNumCheque[i], strBomPara[i], fValor[i], strCPF[i], strNome[i]);
            }
            }
            for (i = 0; i < 1; i++)// vai ate 1 de forma que so possa ser alterado um registro de cada vez.
            {
                if (i == index) // retorna o valor de i para indice, de forma que seja possivel alterar o indice sem alterar i
            printf("\n\nAlterar");
            printf("\nDigite o codigo do cheque a ser alterado ()\n");//Pede qual registro sera alterado, apos informado, os dados substituem os que ja estao registrados no vetor "escrevendo por cima"
            scanf("%d", &index);
                {// Reinfoormar os dados igual o procedimento de cadastramento denovo.
            		printf("\nInforme o CPF do emitente:\n");
            		scanf("%s", strCPF[index]);
		            printf("\nInforme o nome do Emitente:\n");
		            scanf("%s", strNome[index]);
		            printf("\nInforme o Numero do cheque [6 posicoes]:\n");
		            scanf("%s", strNumCheque[index]);
		            printf("\nInforme a data de bom para [formato xx.xx.xxxx]:\n");
		            scanf("%s", strBomPara[index]);            
		            printf("\nInforme o valor do cheque [formato 0.00]:\n");
		            scanf("%f", &fValor[index]);
                            }
            }
            printf("Alterado com Sucesso!\n");
    
            break;

        case 3: //Remocao do registro na verdade exclui seu conteudo com espaço em branco e atribui -1 para o campo valor.
                //if verifica se o campo valor possui valor -1, se SIM, ignora na impressão, se NÃO aparece na impressão. Exclusão virtual.

            printf("\n#. Num cheq. Bom para.... Valor.. CPF......... Nome...........................");
            for (i = 0; i < qtdItens; i++) {
                if (fValor[i]!=-1){
                printf("\n%d. %s... %s.. %.2f. %s. %s.",i, strNumCheque[i], strBomPara[i], fValor[i], strCPF[i], strNome[i]);
            }
            }
            printf("\n\nRemover\n");
            printf("Digite o cÃ³digo do cheque a ser removido ()\n");
            scanf("%d", &index);

            
            for (i = 0; i < MAX_ITEM; i++)
            {
                if (i == index)
                {
                    strncpy(strNumCheque[index],"", 50);
                    strncpy(strNumCheque[index],"", 50);
                    fValor[index] = -1;
                }
            }
            printf("Removido com Sucesso!\n");

            break;
        case 4:// LIstar itens/cheques cadastrados, utiliza o for e if tradicinais de forma a repetir o laço até o ultmo registro efetuado, no formato de relatorio onde aparecem todas as informações digitadas.
            printf("Listar cheques");
            printf("\n#. Num cheq. Bom para.... Valor.. CPF......... Nome...........................");
            for (i = 0; i < qtdItens; i++) {
                if (fValor[i]!=-1){
                printf("\n%d. %s... %s.. %.2f. %s. %s.",i, strNumCheque[i], strBomPara[i], fValor[i], strCPF[i], strNome[i]);
                }
            }

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
