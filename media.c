#include <stdio.h>

int main()
{
    float n1, n2, n3, n4, media; 
    printf("Insira as Notas: \n");
    
    printf("NOTA 1: ");
    scanf("%f", &n1);
    
    printf("NOTA 2: ");
    scanf("%f", &n2);
    
    printf("NOTA 3: ");
    scanf("%f", &n3);

    printf("NOTA 4: ");
    scanf("%f", &n4);
    
    media = (n1 + n2 + n3 + n4) / 4;
    
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

