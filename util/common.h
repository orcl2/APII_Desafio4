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
void createArrayOfArray(int rowCount, int colCount);