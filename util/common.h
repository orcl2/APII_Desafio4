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
void fillArrayOfArrayWithValue(int **arrayOfArray, int rowCount, int colCount, int value);
void fillArrayOfArrayWithRandomValue(int **arrayOfArray, int rowCount, int colCount, int randomMaxValue);
void freeArrayOfArray(int **arrayOfArray, int rowCount);
void printArrayOfArray(int **arrayOfArray, int rowCount, int colCount);
int getSumOfArrayOfArray(int **arrayOfArray, int rowCount, int colCount);
