#include <stdio.h>

int Fibonacci(float N, int Fibo1, int Fibo2, int Fibo3)
//Escolhi usar Float para tratamento de erros caso o número digitado não fosse inteiro. 
{
    if(N > Fibo3)
    {
         return Fibonacci(N, Fibo2, Fibo3 , Fibo2 + Fibo3);
    }
    if(N == Fibo1 || N == Fibo2 || N == Fibo3)
    {
        return 0;
    }
    return 1;
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
