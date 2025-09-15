/*
    Além dos comandos if e else, a linguagem C possui um comando de
    seleção múltipla chamado switch. Esse comando é muito parecido com o
    aninhamendo de comandos if-else-if.



    O comando switch é muito mais limitado que o comando
    if-else: Somente compara igualdade entre expressões.
*/

#include <stdio.h>

int main () {

    int num;

    printf ("Digite um número inteiro entre 1 e 5: ");
    scanf ("%d", &num);

    switch (num) {
        case 1:
            printf ("Você digitou o número 1\n");
            break;
        case 2:
            printf ("Você digitou o número 2\n");
            break;
        case 3:
            printf ("Você digitou o número 3\n");
            break;
        case 4:
            printf ("Você digitou o número 4\n");
            break;
        case 5:
            printf ("Você digitou o número 5\n");
            break;
        default:
            printf ("Número inválido! Digite um número entre 1 e 5.\n");
    }

    return 0;
}