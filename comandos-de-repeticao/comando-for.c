/*
    Estrutura comando for:


    for (inicialização; condição (literalmente uma condição); incremento) {
        sequência de comandos;
    }
*/

#include <stdio.h>

int main () {

    int a,b,c;

    for (int cont = 1 ; cont < 4; cont++){
        switch (cont) {
            case 1 :
                printf("Digite a Inicialização: \n");
                scanf("%d", &a);
                break;
            case 2 :
                printf("Digite a condição: \n");
                scanf("%d", &b);
                break;
            case 3 :
                printf("Digite o incremento: \n");
                scanf("%d", &c);
                break;
            default:
                break;
        }
    }

    // for (a ; a < b +1; a += c) {
    //     printf("%d\n",a);

    // }
    // no incremento é importante somarmos com o valor da

    for (; a < b + 1; a += c) {
    printf("%d\n", a);
    }

    return 0;
}