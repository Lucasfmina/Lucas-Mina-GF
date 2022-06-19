#include <stdio.h>

void inverterSTR(char str[], int N) //Função recebe a string e o número de elementos
{
    N--; //Subtrai um elemento para não considerar o '\0'
    char aux;
    for(int i = 0; i < (N/2)+1; i++) //(N/2)+1 usado para funcionar com strings de tamanhos pares e ímpares
    //Elementos de posições simétricas são invertidos
    {
        aux = str[i];
        str[i] = str[N-i];
        str[N-i] = aux;
    };
}

int main()
{
char string[22] = "String a ser invertida";
inverterSTR(string, 22);
printf("%s", string);
return 0;
}
