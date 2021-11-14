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

void fillArrayOfArrayWithIncrementValue(int **arrayOfArray, int rowCount, int colCount, int value){
    for(int row = 0; row < rowCount; row++){
        for(int col = 0; col < colCount; col++){       
            arrayOfArray[row][col] = value;    
            value++;
        }
    }
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

void fillArrayOfArrayWithRandomValueInRange(int **arrayOfArray, int rowCount, int colCount, int randomMinValue, int randomMaxValue){
    srand((unsigned)time(NULL));

    randomMaxValue = randomMaxValue + (randomMinValue * -1);

    for(int row = 0; row < rowCount; row++){
        for(int col = 0; col < colCount; col++){
            int randomNumber = randomMinValue + (rand() % randomMaxValue);           
            arrayOfArray[row][col] = randomNumber;    
        }
    }
}

void fillArrayWithNegativeValuesOfAnArrayOfArray(int **arrayOfArray, int rowCount, int colCount, int *array){
   for(int row = 0; row < rowCount; row++){
       int count = 0;
       for(int col = 0; col < colCount; col++){
           if(arrayOfArray[row][col] < 0){
               count++;
           }
       }
       array[row] = count;
   } 
}

void initArrayWithZeros(int *array, int lenght){
    for(int col = 0; col < lenght; col++){
        array[col] = 0;
    }   
}

void fillArrayWithSumOfColumnsOfAnArrayOfArray(int **arrayOfArray, int rowCount, int colCount, int *array){
   initArrayWithZeros(array, colCount);

   for(int row = 0; row < rowCount; row++){
       int count = 0;
       for(int col = 0; col < colCount; col++){
           array[col] = array[col] + arrayOfArray[row][col];
       }
   } 
}

void fillArrayOfArrayWithSumOfArrayOfArrays(int **arrayOfArray1, int **arrayOfArray2, int rowCount, int colCount, int **resultArray){
    for(int row = 0; row < rowCount; row++){
       int count = 0;
       for(int col = 0; col < colCount; col++){
           resultArray[row][col] = arrayOfArray1[row][col] + arrayOfArray2[row][col];
       }
    } 
}

void fillArrayWithAnMultipliedArrayOfArray(int **arrayOfArray, int rowCount, int colCount, int mulFactor, int *array){
    int positionRatio = 0;
    for(int row = 0; row < rowCount; row++){
       for(int col = 0; col < colCount; col++){
           array[col + positionRatio] = arrayOfArray[row][col] * mulFactor;
       }
       positionRatio += colCount;
    } 
}

void freeArray(int *array){
    free(array);
}

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

int getSumOfEvenRowsOfAndAraayOfArray(int **arrayOfArray, int rowCount, int colCount){
    int sum = 0;
    for(int row = 0; row < rowCount; row ++){    
        for(int col = 0; col < colCount; col++){
            sum += arrayOfArray[row][col]; 
        }
    }

    return sum;
}

int getSumOfAColumnOfAnArrayOfArray(int **arrayOfArray, int rowCount, int col){
    int sum = 0;
    for(int row = 0; row < rowCount; row ++){   
        sum += arrayOfArray[row][col]; 
    }

    return sum;
}

int getSumOfARowOfAnArrayOfArray(int **arrayOfArray, int colCount, int row){
    int sum = 0;
    for(int col = 0; col < colCount; col++){
        sum += arrayOfArray[row][col]; 
    }

    return sum;  
}

int getSumOfAMainDiagonalOfAnArrayOfArray(int **arrayOfArray, int rowCount){
    int sum = 0;
    for(int row = 0; row < rowCount; row ++){    
        sum += arrayOfArray[row][row]; 
    }

    return sum;
}

void MultiplyMainDiagonalOfAnArrayOfArray(int **arrayOfArray, int rowCount, int value){
    int sum = 0;
    for(int row = 0; row < rowCount; row ++){    
        arrayOfArray[row][row] = arrayOfArray[row][row] * value; 
    }
}

int getSumOfASecondaryDiagonalOfAnArrayOfArray(int **arrayOfArray, int rowCount, int colCount){
    int sum = 0;
    int col = colCount - 1;
    for(int row = 0; row < rowCount; row++, col--){    
        sum += arrayOfArray[row][col]; 
    }

    return sum;
}
