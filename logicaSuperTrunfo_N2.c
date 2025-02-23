#include <stdio.h>

int main() {

    // declarando as variaveis do código.
    char estado1[50], nomCid1[50], estado2[50], nomCid2[50];
    int codCid1, pt1, codCid2, pt2, opcao;
    float pop1, area1, pib1, pop2, area2, pib2;


    printf("*** Bem Vindos ao COMPARADOR!!*** \n");

    //capitando as informações do primeiro jogador
    printf("Digite o Código da Cidade:\n");
    scanf("%d", &codCid1);
    printf("Digite o nome do Estado:\n");
    scanf("%s", estado1);
    printf("Digite o nome da Cidade:\n");
    scanf("%s", nomCid1);
    printf("Digite a População:\n");
    scanf("%f", &pop1);
    printf("Digite a Área:\n");
    scanf("%f", &area1);
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);
    printf("Digite os Pontos Turisticos:\n");
    scanf("%d", &pt1);
 
    //capitando as informções do segundo jogador
    printf("***Agora os dados da outra CARTA***\n");
    printf("Digite o Código da Cidade:\n");
    scanf("%d", &codCid2);
    printf("Digite o nome do Estado:\n");
    scanf("%s", estado2);
    printf("Digite o nome da Cidade:\n");
    scanf("%s", nomCid2);
    printf("Digite a População:\n");
    scanf("%f", &pop2);
    printf("Digite a Área:\n");
    scanf("%f", &area2);
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);
    printf("Digite os Pontos Turisticos:\n");
    scanf("%d", &pt2);

    //Solicitei ao jogador o atributo para comparação
    printf("Escolha qual atributo voce quer comparar\n");
    printf("1. Populção:\n");
    printf("2. Área:\n");
    printf("3. PIB:\n");
    printf("4. Pontos Turisticos:\n");
    printf("Digite a sua escolha!!:\n");
    scanf("%d",&opcao);


    //utilizei o sistema de Switch para da funcionalidade ao menu que foi fornecido ao jogador

    switch (opcao){
    case 1:
        if(pop1 > pop2){
        printf("%s tem a maior População\n", nomCid1);
    }else{
        printf("%s tem a maior População\n", nomCid2);
    }
    break;
        case 2:
        if(area1 > area2){
        printf("%s tem a maior Área\n", nomCid1);
    }else{
        printf("%s tem a maior Área\n", nomCid2);
    }
    break;
        case 3:
        if(pib1 > pib2){
        printf("%s tem a maior PIB\n", nomCid1);
        }else{
        printf("%s tem a maior PIB\n", nomCid2);
    }
    break;
        case 4:
        if(pt1 > pt2){
        printf("%s tem mais Pontos Turisticos\n", nomCid1);
        }else{
        printf("%s tem mais Pontos Turisticos\n", nomCid2);
    }
    break;
    
    default:
        printf("Opção Invalida!!");
        break;
    }

    return 0;
}
