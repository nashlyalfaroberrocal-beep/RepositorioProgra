#include "SolutionB.h"
#include <iostream>

//B.1
void addProduct(std::string*& productNames, double*& productPrices, int*& productStock, int& productCount, std::string name, double price,int qty){

    int newSize= productCount + 1;

    std::string* newNames = new std::string[newSize];
    double* newPrices = new double[newSize];
    int* newStock =new int[newSize];

    for (int i =0; i < productCount; i++){
        newNames[i]= productNames[i];
        newPrices[i]= productPrices[i];
        newStock[i] = productStock[i];
    }

    newNames[productCount] = name;
    newPrices[productCount] = price;
    newStock[productCount] = qty;

    delete[] productNames;
    delete[] productPrices;
    delete[] productStock;

    productNames= newNames;
    productPrices = newPrices;
    productStock= newStock;
    productCount++;

}

//B.2
int findProduct(std::string* productNames, int productCount, std::string name) {

    for (int i = 0; i < productCount; i++) {
        if (productNames[i] == name) {
            return i;
        }
    }

    return -1;
}


//B.3
void updateStock(int* productStock, int index, int newQty) {
    if (index >= 0) {
        productStock[index] = newQty;
    }
}

//B.4
void salesMatrix(int** sales, int productCount){
    for (int day = 0; day < 7; day++){
        int dayTotal = 0;

        for (int product =0; product < productCount; product++){
            dayTotal += sales[day][product];
        }

        std::cout << "Day " << day + 1 << " total: "
            << dayTotal << std::endl;
    }

    for (int product =0; product < productCount; product++){
        int productTotal = 0;

        for (int day = 0; day < 7; day++){
            productTotal += sales[day][product];
        }

        std::cout << "Product " << product + 1 << " total: "
            << productTotal << std::endl;
    }
}

//B.5
void priceMinMax(double* productPrices, int productCount, double* minPrice, double* maxPrice){
    if (productCount <= 0){
        *minPrice = 0;
        *maxPrice = 0;
        return;
    }

    double minimum = productPrices[0];
    double maximum = productPrices[0];

    for (int i = 1; i < productCount; i++){

        if (productPrices[i] < minimum){
            minimum= productPrices[i];
        }

        if (productPrices[i] > maximum){
            maximum = productPrices[i];
        }
    }

    *minPrice = minimum;
    *maxPrice = maximum;
}

//B.6
void showInventory(std::string* productNames, double* productPrices, int* productStock, int productCount){

    for (int i = 0; i < productCount; i++){
        std::cout << "Product: " << productNames[i] << std::endl;
        std::cout << "Price: " << productPrices[i] << std::endl;
        std::cout << "Stock: " << productStock[i] << std::endl;
        std::cout << std::endl;
    }
}

//B.7
void freeAll(std::string* productNames, double* productPrices, int* productStock){
    delete[] productNames;
    delete[] productPrices;
    delete[] productStock;
}