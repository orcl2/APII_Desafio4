//1. (desafio4_01.c) 
//Faça um algoritmo que gere uma matriz de inteiros 7 x 9 com números
//aleatórios, imprima a matriz e calcule e imprima a soma dos seus elementos.
#include "./util/common.h"

int main(void) {
    int **matriz;
    int rowCount = 7;
    int colCount = 9;
    int randomMaxValue = 1000;

    matriz = createArrayOfArray(rowCount, colCount);    

    fillArrayOfArrayWithRandomValue(matriz, rowCount, colCount, randomMaxValue);

    printArrayOfArray(matriz, rowCount, colCount);


    int sumOfArrayOfArray =  getSumOfArrayOfArray(matriz, rowCount, colCount);
    printf("\nSoma dos elementos eh: %d", sumOfArrayOfArray);
    
    freeArrayOfArray(matriz, rowCount);
}