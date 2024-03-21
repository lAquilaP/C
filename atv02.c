#include <stdio.h>
int main()
{
    int valor1, valor2, total;
    
    printf("______Calculadora_______\n");
    printf("Digite um número: ");
    scanf("%d", &valor1);
    
    printf("Digite mais um número: ");
    scanf("%d", &valor2);
    
    total = valor1 + valor2;
    printf("O valor da soma é: %d\n", total);
    
    total = valor1 - valor2;
    printf("O valor da subtração é: %d\n", total);
    
    total = valor1 * valor2;
    printf("O valor da multiplicação é: %d\n", total);
    
    total = valor1 / valor2;
    printf("O valor da divisão é: %d\n", total);
    
    total = valor1 % valor2;
    printf("O valor do resto de divisão é: %d\n", total);
}

