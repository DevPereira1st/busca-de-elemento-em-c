#include <stdio.h>

#define LINHA 3
#define COLUNA 3


int main() {
    int matriz[LINHA][COLUNA];

    int target = 9;
    int found = 0;

    int some = 1;

    for (int i = 0; i < LINHA; i++){ //  Cria matriz de 1 a 9.
        for (int j = 0; j < COLUNA; j++) { 
            matriz[i][j] = some;
            some++;

            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }


    //Busca condicional do elemnto alvo

    for (int i = 0; i < LINHA; i++){
        for (int j = 0; j < COLUNA; j++) {
            if (matriz[i][j] == target) {
                printf("\nO valor %d encontrado no indice (%d, %d)\n", i, j, target);
                found  = 1;
                break;
            }
        }
        if(found) break;
    }

    if (!found) {
        printf("\nO valor %d não encontrado na indice.\n", target);
    }
    return 0;
}
