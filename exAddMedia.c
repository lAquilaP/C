#include <stdio.h>

int main()
{
    float n[4];
    float acc, media;
    int i, len;
    
    printf("Insira as Notas: \n");
    
    printf("NOTA 1: ");
    scanf("%f", &n[0]);
    
    printf("NOTA 2: ");
    scanf("%f", &n[1]);
    
    printf("NOTA 3: ");
    scanf("%f", &n[2]);

    printf("NOTA 4: ");
    scanf("%f", &n[3]);
    
    len = sizeof(n) / sizeof(n[0]);

    for(i = 0; i < len; i++){
        acc += n[i];
        printf("%.2f\n", acc);
    };
    
    media = acc / 4;
    
    printf("Sua média é %.2f\n", media);
    
    if(media > 5.9){
        printf("APROVADO!!!");
        
    } else if(media < 4.0){
        printf("REPROVADO!!!");
        
    } else {
        printf("EXAME!!!");
        
    }
    return 0;
}

