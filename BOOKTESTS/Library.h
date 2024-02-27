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
        for (int i = 0; i < sizeLib;i++) {
            if (i >= idx) {
                newlib[i] = lib[i+1];
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
        }
    }

    void sortLib_price() {
        for (int i = 0; i < sizeLib-1; i++)
        {
            for (int j = i+1; j < sizeLib; j++)
            {
                BOOK oldnum;
                oldnum.price = 1;
                if (lib[i].price > lib[j].price) {
                    oldnum.price = lib[i].price;
                    oldnum.author = lib[i].author;
                    oldnum.zaglavie = lib[i].zaglavie;
                    oldnum.year = lib[i].year;
                    oldnum.kategoria = lib[i].kategoria;
                    
                    lib[i].author = lib[j].author;
                    lib[j].author = oldnum.author;

                    lib[i].year = lib[j].year;
                    lib[j].year = oldnum.year;

                    lib[i].zaglavie = lib[j].zaglavie;
                    lib[j].zaglavie = oldnum.zaglavie;

                    lib[i].kategoria = lib[j].kategoria;
                    lib[j].kategoria = oldnum.kategoria;

                    lib[i].price = lib[j].price;
                    lib[j].price = oldnum.price;
                }
            }
        }
    }

    void sortLib_year() {
        for (int i = 0; i < sizeLib-1; i++)
        {
            for (int j = i+1; j < sizeLib; j++)
            {
                BOOK oldnum;
                oldnum.price = 1;
                if (lib[i].year > lib[j].year) {
                    oldnum.price = lib[i].price;
                    oldnum.author = lib[i].author;
                    oldnum.zaglavie = lib[i].zaglavie;
                    oldnum.year = lib[i].year;
                    oldnum.kategoria = lib[i].kategoria;
                    
                    lib[i].author = lib[j].author;
                    lib[j].author = oldnum.author;

                    lib[i].year = lib[j].year;
                    lib[j].year = oldnum.year;

                    lib[i].zaglavie = lib[j].zaglavie;
                    lib[j].zaglavie = oldnum.zaglavie;

                    lib[i].kategoria = lib[j].kategoria;
                    lib[j].kategoria = oldnum.kategoria;

                    lib[i].price = lib[j].price;
                    lib[j].price = oldnum.price;
                }
            }
        }
    }
    
    void sortLib_zagl(){
        for (int i = 0; i < sizeLib-1; i++)
        {
            for (int j = i+1; j < sizeLib; j++)
            {
                BOOK oldnum;
                oldnum.price = 1;
                if (lib[i].zaglavie > lib[j].zaglavie) {
                    oldnum.price = lib[i].price;
                    oldnum.author = lib[i].author;
                    oldnum.zaglavie = lib[i].zaglavie;
                    oldnum.year = lib[i].year;
                    oldnum.kategoria = lib[i].kategoria;
                    
                    lib[i].author = lib[j].author;
                    lib[j].author = oldnum.author;

                    lib[i].year = lib[j].year;
                    lib[j].year = oldnum.year;

                    lib[i].zaglavie = lib[j].zaglavie;
                    lib[j].zaglavie = oldnum.zaglavie;

                    lib[i].kategoria = lib[j].kategoria;
                    lib[j].kategoria = oldnum.kategoria;

                    lib[i].price = lib[j].price;
                    lib[j].price = oldnum.price;
                }
            }
        }
    }
    
    void sortLib_author(){
        for (int i = 0; i < sizeLib-1; i++)
        {
            for (int j = i+1; j < sizeLib; j++)
            {
                BOOK oldnum;
                oldnum.price = 1;
                if (lib[i].author > lib[j].author) {
                    oldnum.price = lib[i].price;
                    oldnum.author = lib[i].author;
                    oldnum.zaglavie = lib[i].zaglavie;
                    oldnum.year = lib[i].year;
                    oldnum.kategoria = lib[i].kategoria;
                    
                    lib[i].author = lib[j].author;
                    lib[j].author = oldnum.author;

                    lib[i].year = lib[j].year;
                    lib[j].year = oldnum.year;

                    lib[i].zaglavie = lib[j].zaglavie;
                    lib[j].zaglavie = oldnum.zaglavie;

                    lib[i].kategoria = lib[j].kategoria;
                    lib[j].kategoria = oldnum.kategoria;

                    lib[i].price = lib[j].price;
                    lib[j].price = oldnum.price;
                }
            }
        }
    }
    
    void sortLib_kateg(){
        for (int i = 0; i < sizeLib-1; i++)
        {
            for (int j = i+1; j < sizeLib; j++)
            {
                BOOK oldnum;
                oldnum.price = 1;
                if (lib[i].kategoria > lib[j].kategoria) {
                    oldnum.price = lib[i].price;
                    oldnum.author = lib[i].author;
                    oldnum.zaglavie = lib[i].zaglavie;
                    oldnum.year = lib[i].year;
                    oldnum.kategoria = lib[i].kategoria;
                    
                    lib[i].author = lib[j].author;
                    lib[j].author = oldnum.author;

                    lib[i].year = lib[j].year;
                    lib[j].year = oldnum.year;

                    lib[i].zaglavie = lib[j].zaglavie;
                    lib[j].zaglavie = oldnum.zaglavie;

                    lib[i].kategoria = lib[j].kategoria;
                    lib[j].kategoria = oldnum.kategoria;

                    lib[i].price = lib[j].price;
                    lib[j].price = oldnum.price;
                }
            }
        }
    }
};
