#include <stdio.h>
// Biblioteca de Input e Output

/*
    Usamos as { } chaves como delimitadores de blocos de instrução
*/

int main () {

    int num; 

    printf("Digite um número: \n");

    scanf ("%d", &num);
    // scanf lê o valor digitado e armazena na variável determinada

    if (num > 10) {
        printf("O número %d que você digitou é maior que 10\n", num);
        // o ; vai no final da instrução e nao do bloco
    }

    
    
    return 0;
}