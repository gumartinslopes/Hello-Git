#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
void movaDiscos(int n, int pi, int pf, int pt){
    int mTotal = pow(2,n)-1;//mínimo de movimentos

    if (n==1){
            printf("\n Mova do pino %i para o pino %i", pi, pf);
    }
    else{
        movaDiscos(n-1, pi, pt, pf);
        printf("\n Mova do pino %i para o pino %i", pi, pf);

        movaDiscos(n-1, pt, pf, pi);

    }
}


int main(){
    setlocale(LC_ALL,"Portuguese");
    printf("\t\tTorres de Hanói");
    int numero,//número de discos
    pinoI = 1,//pino inicial
    pinoF = 3,//pino final
    pinoT = 2;//pino temporário

    printf("\nQuantos discos tem o seu jogo?");
    scanf("%i", &numero);

    int mTotal = pow(2,numero)-1;//mínimo de movimentos
    printf("\nSiga as seguintes instruções para terminar o jogo:\n\n");
    movaDiscos(numero, pinoI, pinoF, pinoT);
    printf("\nParabéns você completou o jogo com %i movimentos!", mTotal);
    return 0;
}

