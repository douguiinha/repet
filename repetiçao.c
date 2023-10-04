#include <stdio.h>

main()
{
    char nota;
    int idade,
        otimo=0,
        maiorOtimo=0,
        bom=0,
        regular=0,
        maiorRuim=0,
        pessimo=0,
        maiorPessimo=0,
        i;
    float somaIdadeRuim=0, ruim=0;

    printf("===== Questionario do Cinema ======\n\n");

    printf("Nota - Significado");
    printf("\n  a  -   otimo");
    printf("\n  b  -   bom");
    printf("\n  c  -   regular");
    printf("\n  d  -   ruim");
    printf("\n  e  -   pessimo\n\n");

    for( i=1; i<=100; i++ )
    {
        printf("\n%d - Idade: ", i);
        scanf("%d", &idade);


        do
        {
            fflush(stdin);
            printf("Nota: ");
            scanf("%c", &nota);
        }
        while((nota != 'a')&&(nota != 'b')&&(nota != 'c')&&(nota != 'd')&&(nota != 'e'));


        if( nota == 'a' )
        {
            otimo++;

            if( idade >= maiorOtimo )
                maiorOtimo = idade;
        }

        else if( nota == 'b' )
            bom++;

        else if( nota == 'c' )
            regular++;

        else if( nota == 'd' )
        {
            ruim++;
            somaIdadeRuim = somaIdadeRuim + idade;
            if( idade >= maiorRuim )
                maiorRuim = idade;
        }
        else
        {
            pessimo++;

            if( idade >= maiorPessimo )
                maiorPessimo = idade;
        }
        fflush(stdin);
    }
    printf("\n\nQuantidade de respostas otimo: %d", otimo);
    printf("\nDifer. perc. entre respostas bom e regular: %d%%",(bom - regular));
    printf("\nMedia de idade das pessoas que responderam ruim: %.2f", (somaIdadeRuim / ruim));
    printf("\nPercentagem de respostas pessimo: %d%%", pessimo);
    printf("\nMaior idade que utilizou a opcao pessimo: %d", maiorPessimo);
    printf("\n\nDiferenca de idade entre a maior idade que respondeu");
 printf("\notimo e a maior idade que respondeu ruim: %d", (maiorOtimo - maiorRuim));

    printf("\n\n");
    system("pause");
}
