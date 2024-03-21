#include <stdio.h>
int main()
{
    int valor1, valor2, total;
    
    printf("______Soma_______\n");
    printf("Digite um número: ");
    scanf("%d", &valor1);
    
    printf("Digite mais um número: ");
    scanf("%d", &valor2);
    
    total = valor1 + valor2;
    printf("O valor da soma é: %d", total);
}
