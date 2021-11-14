//2. (desafio4_02.c) 
//Gerar (em tempo execução) e imprimir uma matriz de 10 linhas e 10
//colunas cujos elementos são 1, 2, 3, ..., 99, 100.
#include "./util/common.h"

int main(void) {
    int **matriz;
    int rowCount = 10;
    int colCount = 10;
    int initialValue = 1;

    matriz = createArrayOfArray(rowCount, colCount);    

    fillArrayOfArrayWithIncrementValue(matriz, rowCount, colCount, initialValue);
    
    printArrayOfArray(matriz, rowCount, colCount);
    
    freeArrayOfArray(matriz, rowCount);
}