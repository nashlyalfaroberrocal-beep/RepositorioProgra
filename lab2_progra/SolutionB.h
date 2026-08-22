#ifndef SOLUTIONB_H
#define SOLUTIONB_H

#include <string>

//B.1
void addProduct(std::string*& productNames, double*& productPrices, int*& productStock, int& productCount, std::string name, double price, int qty);

//B.2
int findProduct(std::string* productNames, int productCount, std::string name);


//B.3
void updateStock(int* productStock, int index, int newQty);

//B.4
void salesMatrix(int** sales, int productCount);

//B.5
void priceMinMax(double* productPrices, int productCount, double* minPrice,double* maxPrice);


//B.6
void showInventory(std::string* productNames, double* productPrices, int* productStock, int productCount);

//B.7
void freeAll(std::string* productNames, double* productPrices, int* productStock);

#endif
