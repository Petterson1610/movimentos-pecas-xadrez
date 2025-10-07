#include <stdio.h>


void movimentarTorre(int torre){
    if(torre > 0){
        printf("Direita\n");
        movimentarTorre(torre - 1); 
    }    
}

void movimentarDama(int dama){
    if(dama > 0){
        printf("Esquerda\n");
        movimentarDama(dama - 1); 
    }
}

void movimentarBispo(int bispo){
    if(bispo > 0){
        printf("Cima - Direita\n");
        movimentarBispo(bispo - 1); 
    }
}

int main (){
    //Simular os movimentos das peças de xadrez (torre, bispo e rainha) através do printf().
    int torre;
    int bispo = 0;
    int dama;
    int cavalo = 0;

    //Movimentando a torre
    printf("---------------- TORRE ----------------\n");
    do{
        printf("Quantas casas deseja movimentar a torre (1 a 8): ");
        scanf("%d", &torre);
    } while (torre < 1 || torre > 8); //Validar entrada do usuário
    movimentarTorre(torre);

    //Movimentando a rainha
    printf("---------------- RAINHA ----------------\n");
    do{
        printf("Quantas casas deseja movimentar a dama (1 a 8): ");
        scanf("%d", &dama);
    } while (dama < 1 || dama > 8); //Validar entrada do usuário
    movimentarDama(dama);

    //Movimentando o bispo
    printf("---------------- BISPO ----------------\n");
    do{
        printf("Quantas casas deseja movimentar o bispo (1 a 8): ");
        scanf("%d", &bispo);
    } while (bispo < 1 || bispo > 8); //Validar entrada do usuário
    movimentarBispo(bispo);

    printf("---------- CAVALO ----------\n");

    //Movimentando o cavalo (por ser em duas direções, utilizamos loops aninhados. O interno referente ao movimento inicial do cavalo e o externo para finalizar o movimento)
    for(cavalo = 0; cavalo < 1; cavalo++){
        for(int i = 0; i < 2; i++){
            printf("Cima\n");
        }
        printf("Direita\n");
    }    
    return 0;
}