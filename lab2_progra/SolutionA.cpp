
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

