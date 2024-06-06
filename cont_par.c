#include <stdio.h>

int main()
{
    int programa = 1;
    while(programa != 0){
        int n1, n2, soma;
        printf("Digite dois números inteiros onde N1 é menor que N2, e sua diferença deve ser maior que 1 e menor que 50\n");
        printf("N1: ");
        scanf("%d", &n1);
        
        printf("N2: ");
        scanf("%d", &n2);
        
        int dif = n2-n1;
        if(n1 < n2 && dif > 1 && dif < 50){
            for(n1; n1 <= n2; n1+=2){
                printf("%d ", n1);
                soma += n1;
            }
            printf("\nSoma: %d", soma);
            programa = 0;
        } else{
            printf("\033[2J");
            printf("\033[1;30H");
            if(n1 > n2){
                printf("ERRO!! N1 é maior que N2!\n");
            } else if(dif <= 1){
                printf("ERRO!! A diferença entre os dois números é muito pequena!\n");
            } else if(dif > 50){
                printf("ERRO!! A diferença entre os dois números é muito grande!\n");
            }
        }
    }
    return 0;
}

