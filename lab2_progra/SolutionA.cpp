
#include <iostream>

    int countGreaterThan(int* array, int size, int limit){
        int count = 0;

        for (int i = 0; i < size; i++)
        {
            if (array[i] > limit)
            {
                count++;
            }
        }

        return count;
    }


    double average(int* array, int size)
    {
        int total = 0;

        for (int i = 0; i < size; i++)
        {
            total += array[i];
        }

        return static_cast<double>(total) / size;
    }


