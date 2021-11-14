// 9. (desafio4_09.c) 
// Faça um algoritmo que calcule a média dos elementos da diagonal principal
// de uma matriz 10X10 de inteiros.
#include "./util/common.h"

int main(void) {
    int **matriz;
    int rowCount = 10;
    int colCount = 10;
    int randomMaxValue = 100;
    float avg = 0;

    matriz = createArrayOfArray(rowCount, colCount);    
    fillArrayOfArrayWithRandomValue(matriz, rowCount, colCount, randomMaxValue);
    avg = (float) getSumOfArrayOfArray(matriz, rowCount, colCount) / (rowCount * colCount);
    printArrayOfArray(matriz, rowCount, colCount);
    printf("\n\n= = = = = Resultado = = = = = =\n");
    printf("A media eh: %.2f", avg);

    freeArrayOfArray(matriz, rowCount);
}