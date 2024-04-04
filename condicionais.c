#include <stdio.h>

int main()
{
    float media;
    int faltas;
    
    printf("Digite a média das notas: \n");
    scanf("%f", &media);
    
    printf("Digite o número de faltas: \n");
    scanf("%d", &faltas);
    
    if(media > 6 && faltas < 10){
        printf("Aprovado!!!!");
    } else{
        printf("Reprovado!!!!!!!!!!!!!!!!!!!!!!");
    }
}

