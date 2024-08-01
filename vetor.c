#include <stdio.h>

int main()
{
    int n[10];
    int i;
    int soma;
    
    for(i = 0; i < 10; i++){
        printf("Número: ");
        scanf("%d", &n[i]);
    }
     for(i = 0; i < 10; i++){
        printf("%d ", n[i]);
        soma += n[i];
    }
    printf("\nSomatório: %d", soma);
}
