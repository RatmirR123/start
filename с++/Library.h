#pragma once


#include <iostream>
#include <string>
#include "BOOK.h"
using namespace std;


struct Library {
    BOOK* lib = new BOOK[0];
    int sizeLib = 0;

    void addBook(BOOK& book) {
        sizeLib += 1;
        BOOK* newlib = new BOOK[sizeLib];
        for (int i = 0; i < sizeLib - 1; i++) {
            newlib[i] = lib[i];
        }
        newlib[sizeLib - 1] = book;
        delete[] lib;
        lib = newlib;
    }

    void deleteBook(int idx) {
        sizeLib -= 1;
        BOOK* newlib = new BOOK[sizeLib];
        for (int i = 0; i < idx; i++) {
            if (i >= idx) {
                newlib[i - 1] = lib[i];
            }
            else {
                newlib[i] = lib[i];
            }
        }
        delete[] lib;
        lib = newlib;
    }

    void printLib() {
        for (int i = 0; i < sizeLib; i++) {
            lib[i].outputbook();
            cout << "--------------\n";
        }
    }
};