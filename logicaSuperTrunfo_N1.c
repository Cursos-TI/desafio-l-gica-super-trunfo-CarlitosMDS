#include <stdio.h>

int main() {

    // declarando as variaveis do código.
    char estado1[50], nomCid1[50], estado2[50], nomCid2[50];
    int codCid1, pt1, codCid2, pt2;
    float pop1, area1, pib1, pop2, area2, pib2;


    printf("***Bem Vindos ao COMPARADOR!!***\n");

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

    //comparandos os dados usando a estrutura if para decidir o vencedor
        if(pop1 > pop2){
        printf("%s tem a maior População\n", nomCid1);
    }else{
        printf("%s tem a maior População\n", nomCid2);
    }
    if(area1 > area2){
        printf("%s tem a maior Área\n", nomCid1);
    }else{
        printf("%s tem a maior Área\n", nomCid2);
    }
    if(pib1 > pib2){
        printf("%s tem a maior PIB\n", nomCid1);
    }else{
        printf("%s tem a maior PIB\n", nomCid2);
    }
    if(pt1 > pt2){
        printf("%s tem mais Pontos Turisticos\n", nomCid1);
    }else{
        printf("%s tem mais Pontos Turisticos\n", nomCid2);
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
