#include <stdio.h>
// Biblioteca de Input e Output

#include <stdlib.h>
/* Biblioteca de funções gerais para alocação de memória, controle de processos, conversões e outras utilidades
*/

int main () {

    int num;
    // declara a variavél e seu tipo
 

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    // Lê um número inteiro do usuário

    if(num > 10) 
        printf("O número é maior que 10.\n");
    // quando o if tem mais de uma linha de código, é necessário usar chaves {}


    /*
        
    
    */

    
    return 0;
}