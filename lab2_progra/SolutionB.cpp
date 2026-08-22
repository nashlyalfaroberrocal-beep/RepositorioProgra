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
