
#include <iostream>

//A.1a
    int countGreaterThan(int* array, int size, int limit){
        int count =0;

        for (int i =0;i < size; i++) {

            if (array[i] > limit){

                count++;
            }
        }

        return count;
    }

//A.1b
    double average(int* array, int size){
        int total =0;

        for (int i =0; i< size; i++){

            total += array[i];
        }

        return static_cast<double>(total) / size;
    }


//A.2a
    void sumByRow(int matrix[3][4], int result[3]) {
        for (int i= 0; i< 3; i++)
        {
            int total =0;

            for (int j= 0; j < 4; j++){

                total += matrix[i][j];
            }

            result[i]= total;
        }
    }

//A.2b
    int countValue(int matrix[3][4], int value){
        int count =0;

        for (int i =0; i< 3; i++){

            for (int j = 0; j < 4; j++){

                if (matrix[i][j]== value){
                    count++;
                }
            }
        }

        return count;
    }

//A.3a
    void findMinMax(int* array, int size, int* minResult, int* maxResult){
       
        if (size <=0){
            return;
        }

        int minValue= array[0];
        int maxValue= array[0];

        for (int i = 1; i < size; i++){

            if (array[i]< minValue){
                minValue = array[i];
            }

            if (array[i] > maxValue){
                maxValue= array[i];
            }
        }

        *minResult = minValue;
        *maxResult = maxValue;
    }

 //A.3b
    void doubleValue(int& value){
        value = value * 2;
    }

 //A.4a
    void freeMatrix(int** matrix, int rows){

        for (int i= 0; i <rows; i++){
            delete[] matrix[i];
        }

        delete[] matrix;
    }

 //A.4b
    int* resizeArray(int* oldArray, int oldSize, int newSize){

        int* newArray= new int[newSize];

        for (int i = 0; i < oldSize && i <newSize; i++){
            newArray[i] = oldArray[i];
        }

        delete[] oldArray;

        return newArray;
    }

