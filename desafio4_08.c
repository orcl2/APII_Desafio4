// 8. (desafio4_08.c) 
// Escreva um algoritmo que leia uma matriz M[5][5] e calcula as somas:
//     a) da linha 4 de M.
//     b) da coluna 2 de M.
//     c) da diagonal principal (une o canto superior esquerdo ao canto inferior direito da
//     matriz quadrada).
//     d) todos os elementos da matriz M.
//     Escrever essas somas e a matriz. 
#include "./util/common.h"

int main(void) {
    int **M;
    int rowCount = 7;
    int colCount = 9;
    int randomMaxValue = 30;
    int sum1, sum2, sum3, sum4;

    M = createArrayOfArray(rowCount, colCount);    
    fillArrayOfArrayWithRandomValue(M, rowCount, colCount, randomMaxValue);

    sum1 = getSumOfARowOfAnArrayOfArray(M, colCount, 4);
    sum2 = getSumOfAColumnOfAnArrayOfArray(M, rowCount, 2);
    sum3 = getSumOfAMainDiagonalOfAnArrayOfArray(M, rowCount);
    sum4 = getSumOfArrayOfArray(M, rowCount, colCount);

    printf("= = = = = Resultado = = = = = =");
    printf("\nSoma da linha 4 de M eh: %d", sum1);
    printf("\nSoma da coluna 2 de M eh: %d", sum2);
    printf("\nSoma da diagonal principal de M eh: %d", sum3);
    printf("\nSoma da todos os elementos de M eh: %d", sum4);

    freeArrayOfArray(M, rowCount);
}