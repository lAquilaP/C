#include <stdio.h>

int main()
{
    float IR, salarioBruto, salarioLiquido, inss, descontos;
    
    float limiteSalario = 7000.00;
    
    printf("Salário Líquido\n");
    printf("Digite seu salário bruto:");
    
    scanf("%f", &salarioBruto);
    
    inss = (salarioBruto / 100) * 14;

    if(salarioBruto > limiteSalario){
        IR = (salarioBruto / 100) * 10;
        
    } else {
        IR = (salarioBruto / 100) * 5;
    }
    
    descontos = IR + inss;
    salarioLiquido = salarioBruto - descontos;
    
    printf("Seu salário bruto é equivalente a %.2f\n", salarioBruto);
    printf("INSS: %.2f\n", inss);
    printf("Descontos de IR: %.2f\n", IR);
    printf("Descontos totais: %.2f\n", descontos);
    printf("Seu salário líquido é equivalente a %.2f", salarioLiquido);
    

    return 0;
}
