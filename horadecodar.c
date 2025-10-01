#include <stdio.h>

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int target = 9;
    int found = 0;

    //Busca condicional do elemnto alvo

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == target) {
                printf("O valor %d encontrado na indice (%d, %d)\n", i, j, target);
                found  = 1;
                break;
            }
        }
        if(found) break;
    }

    if (!found) {
        printf("O valor %d não encontrado na indice.\n", target);
    }
    return 0;
}