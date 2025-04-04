#include <stdio.h>

/*Recursividade torre*/
void movtorre(int num){
    if(num >= 1){
        printf("Direita  - ");
        movtorre(num - 1);
    }
}

/*Recursividade bispo */
void movbispo(int num){
    for(num = 1; num <= 10; num++){
        if(num % 2 == 0){
            printf("Direita  - ");
        } else{
            printf("cima  ");
        }
    }
}

/*Recursividade torre*/
void movrainha(int num){
    if(num >= 1){
        movrainha(num - 1);
        printf("Esquerda  - ");
    }

}

/*Recursividade torre*/
void movcavalo(int num){
    int i = 1;
    if(num >= 1){
        do{
            printf("Baixo  ");
            i++;
        } while(i <= 2);
        printf("Esquerda - ");
        movcavalo(num - 1);
    }
}

int main(void){
    int peca, reinicio, movimentos;
    
    do{
        /*escolher peça*/
        printf("\nSelecione qual peca voce deseja mover: \n");
        printf("1 - Torre\n");
        printf("2 - Bispo\n");
        printf("3 - Rainha\n");
        printf("4 - Cavalo\n");

        scanf(" %d", &peca);
    
        switch(peca){
            /*opçao torre*/
            case 1:
            movimentos = 5;
            printf("Torre se move para: \n");
            movtorre(movimentos);
            break;

            /*opção bispo*/
            case 2:
            movimentos = 5;
            printf("bispo se move para: \n");
            movbispo(movimentos*2);
            break;
            
            /*opção rainha*/
            case 3:
            movimentos = 8;
            printf("Rainha se move para: \n");
            movrainha(movimentos);
            break;

            /*opção cavalo*/
            case 4:
            movimentos = 3;
            printf("Cavalo se move para: \n");
            movcavalo(movimentos);
            break;
    
            default:
            printf("\nopcao invalida\n");
            break;
        }
        /*opção reiniciar jogo*/
        printf("\n\nDeseja reiniciar? \n");
        printf("1 - Sim\n");
        printf("2 - Nao\n");
        scanf("%d", &reinicio);
    }
     while(reinicio == 1);
     printf("Fim de jogo!");

    return 0;
}
