#include <stdio.h>

//Cabeçalho do jogo irá vir aqui
int main() {
    printf("********************************\n");
    printf("Hello World, Marcus, Boa sorte!\n");
    printf("********************************\n");

    int numerosecreto = 42;

    int chute;

    //float valor = (chute/numerosecreto);
    printf("Qual é o seu chute?\n");
    scanf("%d", &chute);

    //printf("Seu chute foi %f do numero secreto\n", valor);
    printf("Seu chute foi %d", chute);

    //printf("O numero secreto é %d!\n", numerosecreto);

}