#include<stdio.h>

main(){

    //operacao de subtração
    //escrever um algoritmo que realize a sutração, a divisão e a multiplicacao de dois numeros e apresente o resultado


    //passo 1 - declarar variaveis
    //passo 2 - recebe os dados
    //passo 3 - monta a operação de processamento (calculo)
    //passo 4 - apresenta as saídas

    //verificar saídas das operacoes de divisão e subtração
    //caso necessário realizar casting, ou seja, mudança de tipo para 
    //apresentação dos dados corretamente

    int num1, num2, resultadoSoma, resultadoSub, resultadoMult;
    float resultadoDiv;

    printf("Digite o numero1\n");
    scanf("%d", &num1);
    printf("\nDigite o segundo numero\n");
    scanf("%d", &num2);
    
    //montar as operacoes:

    resultadoSoma = num1 + num2;
    resultadoSub = num1 - num2;
    resultadoMult = num1 * num2;
    resultadoDiv = (float)num1 / num2;

    //apresentação dos resultados
    printf("\nResultado soma: %d", resultadoSoma);
    printf("\nResultado subtracao: %d", resultadoSub);
    printf("\nResultado divisao: %.2f", resultadoDiv);
    printf("\nResultado multiplicacao: %d", resultadoMult);


}