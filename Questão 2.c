#include <stdio.h>

int Fibonacci(float N, int Fibo1, int Fibo2, int Fibo3) //Fibo1, 2 e 3 são os valores iniciais desejados, no caso 0, 1 e 1. Eles se alteram no processo recursivo.
//Escolhi usar Float para o número visando o tratamento de erros caso o número digitado não fosse inteiro. 
{
    if(N > Fibo3) //O programa verifica se o valor de N está na sequência de 3 números atual, se não, ele continua com a sequencia sucessora.
    {
         return Fibonacci(N, Fibo2, Fibo3 , Fibo2 + Fibo3);
    }
    if(N == Fibo1 || N == Fibo2 || N == Fibo3)
    {
        return 0; //0 significa que sim, o valor de N foi achado na sequência de Fibonacci
    }
    return 1; //caso o programa não retorne 0, o resultado 1 significa que N não foi encontrado
}

int main()
{
    float N;
    printf("Digite o número: ");
    scanf("%f", &N);
    if (Fibonacci(N, 0, 1, 1) || N != (int)N) //Aqui ele verifica se N é inteiro.
    {
        printf("\nNão pertence a sequência");
    }
    else
    {
        printf("\nPertence a sequência");
    }
    return 0;
}
