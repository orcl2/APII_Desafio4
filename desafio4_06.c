// 6. (desafio4_06.c) 
// Dadas duas matrizes A 5x5 e B 5x5, criar e imprimir a matriz S sendo a soma
// de A e B (a soma dos elementos de mesmo índice).
#include "./util/common.h"

int main(void) {
    int **A;
    int **B;
    int **S;
    int rowCount = 5;
    int colCount = 5;
    int randomMaxValue = 100;

    A = createArrayOfArray(rowCount, colCount);    
    fillArrayOfArrayWithRandomValue(A, rowCount, colCount, randomMaxValue);

    B = createArrayOfArray(rowCount, colCount);    
    fillArrayOfArrayWithRandomValue(B, rowCount, colCount, randomMaxValue);

    S = createArrayOfArray(rowCount, colCount);
    fillArrayOfArrayWithSumOfArrayOfArrays(A, B, rowCount, colCount, S);
    
    printArrayOfArray(A, rowCount, colCount);
    printf("\n");
    printArrayOfArray(B, rowCount, colCount);
    printf("\n\nResultado\n");
    printArrayOfArray(S, rowCount, colCount);
    
    freeArrayOfArray(A, rowCount);
    freeArrayOfArray(B, rowCount);
    freeArrayOfArray(S, rowCount);
}