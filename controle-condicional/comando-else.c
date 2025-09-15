/*
Uma expressão condicional é qualquer expressão que resulte numa res-
posta do tipo falso (zero) ou verdadeiro (diferente de zero).
*/

/*
O comando else pode ser entendido como sendo um complemento do co-
mando if. Ele auxı́lia o comando if na tarefa de escolher dentre os vários
caminhos a ser segudo dentro do programa.
*/

#include <stdio.h>

int main () {
    int num;

    printf (" Digite um número inteiro: ");
    scanf ("%d", &num);

    if ( num == 10) {
        printf ("O número é igual a 10\n");
    }
    else {
        printf ("O número NÃO é igual a 10\n");
    }
    // Else é a condição final, se nenhuma das anteriores for verdadeira, executa o else. *ELSE NÃO TEM CONDIÇÃO*

    return 0;
}