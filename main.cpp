// lab12poo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculator.h"
using namespace std;


template <typename T>
void swap(T*& a, T*& b) {
    T* temp = a;
    a = b;
    b = temp;
}

// Sorting function based on price
void sortByPrice(Silicon** array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (array[i]->getPret() > array[j]->getPret()) {
                swap(array[i], array[j]);
            }
        }
    }
}

int main() {
    const int size = 5;
    Silicon* objects[size];
    objects[0] = new Procesor(3.5, 500, 150, "Intel Factory");
    objects[1] = new PlacaVideo(1.8, 800, 200, "NVIDIA Factory");
    objects[2] = new Calculator("Dell", "Dell Factory", 300, 700, 3.6, 900, 1.9);
    objects[3] = new Procesor(4.2, 600, 200, "AMD Factory");
    objects[4] = new PlacaVideo(2.1, 750, 180, "MSI Factory");
    
    /*for (int i = 0; i < size; ++i) {
        objects[i].afisare();
    }*/
    std::cout << "\nNESORTAT\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Sursa: " << objects[i]->getSursa() << "\n";
        std::cout << "Pret: " << objects[i]->getPret() << "\n";
    }
    sortByPrice(objects, size);
    std::cout << "\nSORTAT\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Sursa: " << objects[i]->getSursa() << "\n";
        std::cout << "Pret: " << objects[i]->getPret() << "\n";
    }

    // Step 5: Free memory
    for (int i = 0; i < size; ++i) {
        delete objects[i];
    }

    return 0;
}


