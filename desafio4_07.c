// 7. (desafio4_07.c) 
// Elaborar um algoritmo que leia uma matriz M[6][6] e um valor A, e após a
// leitura, multiplique a matriz M pelo valor A e coloque os valores da matriz multiplicados por
// A em um vetor V(36). Escrever o vetor V no final.
#include "./util/common.h"

int main(void) {
    int **M;
    int *V;
    int rowCount = 6;
    int colCount = 6;
    int randomMaxValue = 50;
    int value = 3;

    M = createArrayOfArray(rowCount, colCount);    
    fillArrayOfArrayWithRandomValue(M, rowCount, colCount, randomMaxValue);

    V = createIntArray(rowCount * colCount);
    fillArrayWithAnMultipliedArrayOfArray(M, rowCount, colCount, value, V);
    printArray(V, rowCount * colCount);
    
    freeArrayOfArray(M, rowCount);
    freeArray(V);
}