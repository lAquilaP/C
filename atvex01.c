#include <stdio.h>
int main()
{
    int n1, n2, total, op;
    
    printf("Qual operação deseja realizar?\n");
    printf("Digite 1 para: Soma(+)\n");
    printf("Digite 2 para: Subtração(-)\n");
    printf("Digite 3 para: Multiplicação(*)\n");
    printf("Digite 4 para: Divisão(/)\n");
    scanf("%d", &op);
    
    if(op == 1){
        printf("Você selecionou a operação Soma, digite 2 numeros\n");
        printf("n1: ");
        scanf("%d", &n1);
        
        printf("n2: ");
        scanf("%d", &n2);
        
        total = n1 + n2;
        printf("O valor total da soma é : %d", total);
    } if(op == 2){
        printf("Você selecionou a operação Subtração, digite 2 numeros\n");
        printf("n1: ");
        scanf("%d", &n1);
        
        printf("n2: ");
        scanf("%d", &n2);
        
        total = n1 - n2;
        printf("O valor total da subtração é : %d", total);
    } if(op == 3){
        printf("Você selecionou a operação Multiplicação, digite 2 numeros\n");
        printf("n1: ");
        scanf("%d", &n1);
        
        printf("n2: ");
        scanf("%d", &n2);
        
        total = n1 * n2;
        printf("O valor total da Multiplicação é : %d", total);
    } if(op == 4){
        printf("Você selecionou a operação Divisão, digite 2 numeros\n");
        printf("n1: ");
        scanf("%d", &n1);
        
        printf("n2: ");
        scanf("%d", &n2);
        
        total = n1 / n2;
        int resto = n1 % n2;
        
        printf("O valor total da Divisão é : %d\n", total);
        printf("E seu resto é: %d", resto);
    }   else {
        printf("Erro! operação inválida!!!!");
    }
    
    return 0;
}
