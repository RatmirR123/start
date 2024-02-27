#pragma once

#include <iostream>
#include <string>
#include "Library.h"
#include "BOOK.h"

using namespace std;


void vvodMenu() {
    cout << "This is the card index menu\n";
    cout << "\n";
    cout << "Enter function\n";
    cout << "\n";
    cout << "1 - Add a book\n";
    cout << "2 - List books\n";
    cout << "3 - Remove a book from the list\n";
    cout << "4 - sort the list by price\n";
    cout << "5 - sort the list by year\n";
    cout << "6 - sort the list by title\n";
    cout << "7 - sort the list by author\n";
    cout << "8 - sort the list by category\n";
    cout << "9 - exit\n";
}


void MainMenu(Library lib) {

    int answer;
    cin >> answer;
    while (answer != 9) {

        if (answer == 1) {
            BOOK a;
            a.inputbook();
            lib.addBook(a);
        }
        else if (answer == 2) {
            if (lib.sizeLib == 0) {
                cout << "-----------------------------\n";
                cout << "Total books in the list = " << lib.sizeLib << "\n";
                cout << "-----------------------------\n";
                cout << "\n";
                cout << "------------------------------\n";
                cout << "There are no books on the list\n";
                cout << "------------------------------\n";
                cout << "\n";
            }
            else {
                cout << "-----------------------------\n";
                cout << "Total books in the list = " << lib.sizeLib << "\n";
                cout << "-----------------------------\n";
                cout << "\n";
                cout << "\n";
                for (int i = 0; lib.sizeLib > i; i++) {
                    cout << "BOOK NUMBER " << i + 1 << "\n";
                    lib.lib[i].outputbook();
                    cout << "\n";
                }
            }
        }
        else if (answer == 3) {
            int ch;
            cout << "which book do you want to delete?\n";
            cout << "\n";
            cin >> ch;
            lib.deleteBook(ch);
        }
        else if (answer == 4) {
            lib.sortLib_price();
        }
        else if (answer == 5){
            lib.sortLib_year();
        }
        else if (answer == 6){
            lib.sortLib_zagl();
        }
        else if (answer == 7){
            lib.sortLib_author();
        }
        else if (answer == 8){
            lib.sortLib_kateg();
        }

        cout << "Enter function\n";
        cin >> answer;
        cout << "\n";
        
    }
}
