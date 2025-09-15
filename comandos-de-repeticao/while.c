// Exemplo de Usabilidade do While

#include <stdio.h>

int main () {
    int a, b;

    printf ("digite o valor de a: \n");
    scanf("%d", &a);

    printf ("Digite o valor de b: \n");
    scanf("%d", &b);

    while (a < b + 1) {
        printf ("\n %d \n", a);

        a++;
        // simplificação de a = a + 1

    }
    return 0;
}

// Sintaxe semelhante a do python, apenas tomar cuidado com o ponto e vígula.
