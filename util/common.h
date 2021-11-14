#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "common.c"

int *createIntArray(int length);
void printArray(int *array, int lenght);
void fillArrayWithValue(int *array, int value, int lenght);
void fillArrayWithIncrementValue(int *array, int startValue, int step, int lenght);
void fillArrayWithRandomValue(int *array, int lenght);
void multiplicationOfArray(int *vetorA, int *vetorB, int *vetorC, int length);
int** createArrayOfArray(int rowCount, int colCount);
void fillArrayOfArrayWithIncrementValue(int **arrayOfArray, int rowCount, int colCount, int value);
void fillArrayOfArrayWithRandomValue(int **arrayOfArray, int rowCount, int colCount, int randomMaxValue);
void fillArrayOfArrayWithRandomValueInRange(int **arrayOfArray, int rowCount, int colCount, int randomMinValue, int randomMaxValue);
void freeArray(int *array);
void freeArrayOfArray(int **arrayOfArray, int rowCount);
void printArrayOfArray(int **arrayOfArray, int rowCount, int colCount);
int getSumOfArrayOfArray(int **arrayOfArray, int rowCount, int colCount);
void fillArrayWithNegativeValuesOfAnArrayOfArray(int **arrayOfArray, int rowCount, int colCount, int *array);
void fillArrayWithSumOfColumnsOfAnArrayOfArray(int **arrayOfArray, int rowCount, int colCount, int *array);
void initarrayWithZeros(int *array, int lenght);
int getSumOfEvenRowsOfAndAraayOfArray(int **arrayOfArray, int rowCount, int colCount);
void fillArrayWithAnMultipliedArrayOfArray(int **arrayOfArray, int rowCount, int colCount, int mulFactor, int *array);
int getSumOfAColumnOfAnArrayOfArray(int **arrayOfArray, int rowCount, int col);
int getSumOfARowOfAnArrayOfArray(int **arrayOfArray, int colCount, int row);
int getSumOfAMainDiagonalOfAnArrayOfArray(int **arrayOfArray, int rowCount);
int getSumOfASecondaryDiagonalOfAnArrayOfArray(int **arrayOfArray, int rowCount, int colCount);
void MultiplyMainDiagonalOfAnArrayOfArray(int **arrayOfArray, int rowCount, int value);