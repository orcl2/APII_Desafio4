// 3. (desafio4_03.c) 
// Dada uma matriz M[1..6][1..8], criar um vetor C que contenha, em cada
// posição, a quantidade de elementos negativos da linha correspondente de M. Para isso,
// popular a matriz M randomicamente com números inteiros positivos e negativos. 
#include "./util/common.h"

int main(void) {
    int **M;
    int *C;
    int rowCount = 6;
    int colCount = 8;
    int randomMaxValue = 100;
    int randomMinValue = -50;

    M = createArrayOfArray(rowCount, colCount);    
    C = createIntArray(rowCount);

    fillArrayOfArrayWithRandomValueInRange(M, rowCount, colCount, randomMinValue, randomMaxValue);
    fillArrayWithNegativeValuesOfAnArrayOfArray(M, rowCount, colCount, C);

    printArrayOfArray(M, rowCount, colCount);
    printf("\n\nVetor de numeros negativos\n");
    printArray(C, rowCount);

    freeArrayOfArray(M, rowCount);
    freeArray(C);
}