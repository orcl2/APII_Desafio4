// 10. (desafio4_10.c) 
// Faça um algoritmo que leia uma matriz 3x3 e após a leitura multiplique os
// elementos da diagonal principal com a média dos elementos da diagonal secundária.
#include "./util/common.h"

int main(void) {
    int **matriz;
    int rowCount = 3;
    int colCount = 3;
    int randomMaxValue = 15;
    int avgOfSecondaryDiagonal = 0;

    matriz = createArrayOfArray(rowCount, colCount);    
    fillArrayOfArrayWithRandomValue(matriz, rowCount, colCount, randomMaxValue);

    printArrayOfArray(matriz, rowCount, colCount);

    avgOfSecondaryDiagonal = getSumOfASecondaryDiagonalOfAnArrayOfArray(matriz, rowCount, colCount) / (rowCount * colCount);
    MultiplyMainDiagonalOfAnArrayOfArray(matriz, rowCount, avgOfSecondaryDiagonal);

    printf("\n");
    printArrayOfArray(matriz, rowCount, colCount);
    
    freeArrayOfArray(matriz, rowCount);
}