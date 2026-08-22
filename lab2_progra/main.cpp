#include "SolutionB.h"
#include <iostream>

int main() {
	std::string* productNames = nullptr;
	double* productPrices = nullptr;
	int* productStock = nullptr;
	int productCount = 0;

	int opcion = 0;
	bool continuar = true;

	while (continuar) {
		std::cout << "\n=== MENU PRINCIPAL ===" << std::endl;
		std::cout << "1. Agregar Producto" << std::endl;
		std::cout << "2. Buscar Producto" << std::endl;
		std::cout << "3. Actualizar Stock" << std::endl;
		std::cout << "4. Mostrar Precio Minimo y Maximo" << std::endl;
		std::cout << "5. Mostrar Inventario" << std::endl;
		std::cout << "6. Salir" << std::endl;
		std::cout << "Selecciona una opcion: ";
		std::cin >> opcion;
		std::cin.ignore();

		switch (opcion) {
		case 1: {
			std::string nombre;
			double precio;
			int cantidad;

			std::cout << "\nNombre del producto: ";
			std::getline(std::cin, nombre);

			std::cout << "Precio: ";
			std::cin >> precio;

			std::cout << "Cantidad: ";
			std::cin >> cantidad;
			std::cin.ignore();

			addProduct(productNames, productPrices, productStock, productCount, nombre, precio, cantidad);
			std::cout << "Producto agregado exitosamente." << std::endl;
			break;
		}

		case 2: {
			std::string nombre;
			std::cout << "\nNombre del producto a buscar: ";
			std::getline(std::cin, nombre);

			int index = findProduct(productNames, productCount, nombre);
			if (index != -1) {
				std::cout << "Producto encontrado en el indice: " << index << std::endl;
			} else {
				std::cout << "Producto no encontrado." << std::endl;
			}
			break;
		}

		case 3: {
			std::string nombre;
			std::cout << "\nNombre del producto: ";
			std::getline(std::cin, nombre);

			int index = findProduct(productNames, productCount, nombre);
			if (index != -1) {
				int nuevoStock;
				std::cout << "Nuevo stock: ";
				std::cin >> nuevoStock;
				std::cin.ignore();

				updateStock(productStock, index, nuevoStock);
				std::cout << "Stock actualizado exitosamente." << std::endl;
			} else {
				std::cout << "Producto no encontrado." << std::endl;
			}
			break;
		}

		case 4: {
			if (productCount > 0) {
				double minPrice = 0, maxPrice = 0;
				priceMinMax(productPrices, productCount, &minPrice, &maxPrice);
				std::cout << "\nPrecio Minimo: " << minPrice << std::endl;
				std::cout << "Precio Maximo: " << maxPrice << std::endl;
			} else {
				std::cout << "No hay productos en el inventario." << std::endl;
			}
			break;
		}

		case 5: {
			if (productCount > 0) {
				std::cout << "\n=== INVENTARIO ===" << std::endl;
				showInventory(productNames, productPrices, productStock, productCount);
			} else {
				std::cout << "El inventario esta vacio." << std::endl;
			}
			break;
		}

		case 6: {
			std::cout << "Saliendo del programa..." << std::endl;
			continuar = false;
			break;
		}

		default:
			std::cout << "Opcion invalida. Intenta de nuevo." << std::endl;
		}
	}

	freeAll(productNames, productPrices, productStock);
	return 0;
}
