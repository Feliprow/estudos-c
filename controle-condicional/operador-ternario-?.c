/* 
O operador ? é também conhecido como operador ternário. Trata-se de
uma simplificação do comando if-else na sua forma mais simples, ou seja,
com apenas um comando e não blocos de comandos.
*/

#include <stdio.h>

// COMPARANDO IF-ELSE COM OPERADOR TERNÁRIO

int main () {
    int x, y, z;
    printf ("Digite valor de x: ");
    scanf ("%d", &x);
    printf ("Digite valor de y: ");
    scanf ("%d", &y);
    printf ("Digite valor de z: ");
    scanf ("%d", &z);

    if (x > z) {
        z = x;
    }
    else {
        z = y;
        printf ("Maior  = %d\n", z);
    }

    printf("==============| Exemplo com '?' |================");

    int x, y, z;
    printf ("Digite valor de x: ");
    scanf ("%d", &x);
    printf ("Digite valor de y: ");
    scanf ("%d", &y);
    printf ("Digite valor de z: ");
    scanf ("%d", &z);


    // CONDIÇÃO TESTADA antes do '?', SE VERDADEIRO executa o primeiro valor após o '?', SE FALSO executa o valor após os ':'
    
    z = (x > z) ? x : y;  // Se x for maior que z, z recebe x, senão z recebe y.

    /*

    O operador ? é limitado e por isso não atende a uma gama muito grande de
    casos que o comando if-else atenderia. Porém, ele pode ser usado para
    simplificar expressões complicadas. Uma aplicação interessante é a do
    contador circular, onde uma variável é incrementada até um valor máximo
    e, sempre que atinge esse valor, a variável é zerada.  
    
    */





    //  OUTRO EXEMPLO DE USO

    /*
        #include <stdio.h>
        #include <stdlib.h>

        int main() {
        int num;
        printf("Digite um numero: ");
        scanf("%d", &num);

        (num == 10) ? printf("O numero é igual a 10.\n") : printf("O numero é diferente de 10.\n");

        system("pause");
        return
    */

    return 0;
}