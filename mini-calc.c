#include <stdio.h>
#include <stdlib.h>


void adicao(){
    int n1, n2;
    printf("Digite o primero numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("%d + %d e %d", n1, n2, n1 + n2);
}

void subtracao(){
    int n1, n2;    
    printf("Digite o primero numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("%d - %d e %d", n1, n2, n1 - n2);
}

void multiplicacao(){
    int n1, n2;
    printf("Digite o primero numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("%d x %d e %d", n1, n2, n1 * n2);
}

void divisao(){
    int n1, n2;
    printf("Digite o primero numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("%d / %d e %d", n1, n2, n1 / n2);
}

int main() {
    int num1, num2, opcao;

    printf("[ 1 ] Adicao \n[ 2 ] Subtracao \n[ 3 ] Multiplicacao \n[ 4 ] Divisao \n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        adicao();
    } else if (opcao == 2) {
        subtracao();
    } else if (opcao == 3) {
        multiplicacao();
    } else if (opcao == 4) {
        divisao();
    }
    
}
