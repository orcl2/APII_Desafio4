int* createIntArray(int length){
    return malloc(length * sizeof(int));
}

void printArray(int *array, int lenght){
    printf("Vetor preenchido: \n");
    for(int i = 0; i < lenght; i++)
    {
        printf("Posicao %d = %d\n", i, array[i]);
    }
}

void fillArrayWithValue(int *array, int value, int lenght){
    for(int i = 0; i < lenght; i++)
    {
        array[i] = value;
    }
} 

void fillArrayWithIncrementValue(int *array, int startValue, int step, int lenght){
    for(int i = 0; i < lenght; i++)
    {
        array[i] = startValue + (i * step);
    }
}

void fillArrayWithRandomValue(int *array, int lenght){
    srand((unsigned)time(NULL));

    for(int i = 0; i < lenght; i++)
    {
        array[i] = rand();
    }
}

void multiplicationOfArray(int *vetorA, int *vetorB, int *vetorC, int length){
    for(int i = 0; i < length; i++)
    {
        vetorC[i] = vetorA[i] * vetorB[i];
    }
};

int** createArrayOfArray(int rowCount, int colCount){
    int **arrayOfArray = (int**) malloc(rowCount * sizeof(int*));

    for(int i = 0; i < rowCount; i++)
    {
        arrayOfArray[i] = (int*) malloc(colCount * sizeof(int));
    }

    return arrayOfArray;
}

void fillArrayOfArrayWithValue(int **arrayOfArray, int rowCount, int colCount, int value){
    
}

void fillArrayOfArrayWithRandomValue(int **arrayOfArray, int rowCount, int colCount, int randomMaxValue){
    srand((unsigned)time(NULL));

    for(int row = 0; row < rowCount; row++){
        for(int col = 0; col < colCount; col++){
            int randomNumber = rand() % randomMaxValue;           
            arrayOfArray[row][col] = randomNumber;    
        }
    }
}

//todo
void freeArrayOfArray(int **arrayOfArray, int rowCount){
    for(int row = 0; row < rowCount; row++){
        free(arrayOfArray[row]);
    }

    free(arrayOfArray);
}

void printArrayOfArray(int **arrayOfArray, int rowCount, int colCount){
    printf("=============== Matriz ===============");
    for(int row = 0; row < rowCount; row++){    
        printf("\nLinha[%d]: ", row);
        for(int col = 0; col < colCount; col++){
            printf(" %d", arrayOfArray[row][col]);       
        }
    }
}

int getSumOfArrayOfArray(int **arrayOfArray, int rowCount, int colCount){
    int sum = 0;
    for(int row = 0; row < rowCount; row++){    
        for(int col = 0; col < colCount; col++){
            sum += arrayOfArray[row][col];       
            if(arrayOfArray[row][col] < 0)
            {
                printf("\n%d  %d  %d\n", arrayOfArray[row][col], row, col);
            }
        }
    }

    return sum;
}