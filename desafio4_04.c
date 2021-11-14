// 4. (desafio4_04.c) 
// Faça um algoritmo popule uma matriz A de 5 X 7 com inteiros randômicos
// e mostre a soma de cada coluna separadamente
#include "./util/common.h"

int main(void) {
    int **A;
    int *sumArray;
    int rowCount = 5;
    int colCount = 7;
    int randomMaxValue = 100;

    A = createArrayOfArray(rowCount, colCount); 
    sumArray = createIntArray(colCount);   

    fillArrayOfArrayWithRandomValue(A, rowCount, colCount, randomMaxValue);
    fillArrayWithSumOfColumnsOfAnArrayOfArray(A, rowCount, colCount, sumArray);

    printArrayOfArray(A, rowCount, colCount);
    printf("\n\nVetor da soma das colunas\n");
    printArray(sumArray, colCount);

    freeArrayOfArray(A, rowCount);
    freeArray(sumArray);
}