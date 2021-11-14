// 5. (desafio4_05.c) 
// Faça um algoritmo que leia uma matriz de 10 X 10 de inteiros. Calcule e
// mostre a soma das linhas pares da matriz.
#include "./util/common.h"

int main(void) {
     int **matriz;
    int rowCount = 10;
    int colCount = 10;
    int initialValue = 1;
    int sum = 0;

    matriz = createArrayOfArray(rowCount, colCount);    

    fillArrayOfArrayWithIncrementValue(matriz, rowCount, colCount, initialValue);
    sum = getSumOfEvenRowsOfAndAraayOfArray(matriz, rowCount, colCount);

    printArrayOfArray(matriz, rowCount, colCount);
    printf("\nA soma das linhas pares eh: %d", sum);
    
    freeArrayOfArray(matriz, rowCount);
}